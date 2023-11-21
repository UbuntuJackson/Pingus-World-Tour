#include "penguin.h"
#include <ufo/game.h>
#include "pingus_world_tour.h"
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <ufo/collision_utils.h>
#include <ufo/rect.h>

Penguin::Penguin(int _id, olc::vf2d _position, PingusWorldTour* _game, std::string _layer_tag) :
    CellActor(_id ,_position, _game, _layer_tag),
    game{static_cast<PingusWorldTour*>(_game)},
    anim_walk(_game),
    anim_bomber(_game),
    anim_target(_game),
    item_state{WALKER},
    direction{1.0f} {
    game->camera.scale = 1.0f;
    mask = "penguin_hitbox";
    mask_decal = game->asset_manager.GetDecal(mask);
    solid_layer = "solid";
    game->camera.SetStateMouseAndArrowKeys({0.0f, 0.0f}, game->map.map_size);
    //game->camera.SetStateFollowPlatfomer(this, {0.0f, 0.0f}, game->map.map_size);
    is_already_in_semi_solid = false;
    snap_to_ground = 6;
    snap_up_range = 18;
}

void
Penguin::Update(){
    switch(item_state){
        case WALKER:
            anim_walk.Update();
            break;
        case BOMBER:
            direction = 0.0f;
            anim_bomber.Update();
            if(int(anim_bomber.frame_count) == anim_bomber.current_anim.size()-1){
                game->map.DeferActorRemoval(id);
            }
            break;
    }
    //game->map.RemoveActor(id);
    velocity.y *= FRICTION_Y;
    velocity.y += 1.1f;
    velocity.x *= FRICTION_X;
    if(is_grounded) velocity.x += ACCELERATION_X*direction;
    ApplyCollisionNaive(&(game->map));
    if(IsOverlapping(&(game->map), game->asset_manager.GetDecal("pingu_wall_detector"), solid_layer, {position.x+direction, position.y})){
        direction*= -1.0f;
    }
    if(RectVsPoint(Rect({position.x-14.0f, position.y-12.0f}, {48.0f,48.0f}), game->camera.ScreenToWorld(game->GetMousePos(), {0.0f,0.0f})) && game->GetMouse(0).bPressed){
        item_state = BOMBER;
        std::cout << id << std::endl;
    }
}

void
Penguin::Draw(Camera* _camera){
    switch(item_state){
        case WALKER:
            anim_walk.Draw(_camera, {position.x-15.0f*direction+8.0f, position.y-4.0f}, {direction, 1.0f});
            break;
        case BOMBER:
            direction = 1.0f;
            anim_bomber.Draw(_camera, {position.x-15.0f*direction+8.0f, position.y-4.0f}, {direction, 1.0f});
            break;
    }
    //_camera->DrawDecal(position, game->asset_manager.GetDecal("pingu_wall_detector"));
    if(RectVsPoint(Rect({position.x-14.0f, position.y-12.0f}, {48.0f,48.0f}), game->camera.ScreenToWorld(game->GetMousePos(), {0.0f,0.0f}))){
        anim_target.Update();
        anim_target.Draw(_camera, {position.x-16.0f, position.y-12.0f}, {1.0f, 1.0f});
    }
    else{
        anim_target.ResetAndPlay();
    }
}