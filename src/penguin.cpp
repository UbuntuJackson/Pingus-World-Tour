#include <cstdlib>
#include "penguin.h"
#include <ufo/game.h>
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <ufo/collision_utils.h>
#include <ufo/rect.h>
#include <ufo/json_interface.h>

Penguin::Penguin(int _id, olc::vf2d _position, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag) :
    CollisionBody(_id ,_position, _game, "penguin_hitbox", _layer_tag),
    game{static_cast<PingusWorldTour*>(_game)},
    level{_level},
    anim_walk(_game),
    anim_bomber(_game),
    anim_target(_game),
    anim_driller(_game),
    item_state{WALKER},
    direction{1.0f} {
    mask_decal = game->asset_manager.GetDecal(mask);
    solid_layer = "solid";
    is_already_in_semi_solid = false;
    snap_to_ground = 6;
    snap_up_range = 18;
    std::cout << "im here" << std::endl;
}

void
Penguin::LoadActorFromFile(ujson::JsonNode* _json, int _id, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag){
    int sx = _json->GetJsonNode("x").GetAs<int>();
    int sy = _json->GetJsonNode("y").GetAs<int>();
    _level->actors.push_back(new Penguin(_id, {(float)sx, (float)sy}, _game, _level, _layer_tag));
}

void
Penguin::Update(){
    
    velocity.y *= FRICTION_Y;
    velocity.y += 1.1f;
    velocity.x *= FRICTION_X;
    if(is_grounded) velocity.x += ACCELERATION_X*direction;

    switch(item_state){
        case WALKER:
            anim_walk.Update();
            ApplyCollisionNaive(level);
            break;
        case BOMBER:
            direction = 0.0f;
            anim_bomber.Update();
            if(int(anim_bomber.frame_count) == anim_bomber.current_anim.size()-1){
                level->Destruct(olc::vf2d(position.x-12.0f, position.y-10.0f), "bomber_explosion_range");
                level->DeferActorRemoval(id);
            }
            break;
        case DRILLER:
            anim_driller.Update();
            
            level->Destruct(position, mask);
            
            velocity.y = 0.4f;
            velocity.x = 0.0f;
            position += velocity;
            if(!IsOverlapping(level, mask_decal, solid_layer, olc::vf2d(position.x, position.y +1.0f))) item_state = WALKER;
            break;

        case PARACHUTER:
            velocity.y = 0.5f;
            anim_walk.Update();
            ApplyCollisionNaive(level);
            break;
    }

    for(auto actor : level->actors){
        if(actor->GetType() == "HoneyCoin"){
            if(IsOverlappingOtherDecal(mask_decal, position, game->asset_manager.GetDecal("honey_coin_hitbox"), actor->position)){
                level->DeferActorRemoval(actor->GetID());
                level->number_of_honey_coins++;
            }
        }
    }
    
    if(IsOverlapping(level, game->asset_manager.GetDecal("pingu_wall_detector"), solid_layer, {(float)((int)position.x+(int)direction), position.y})){
        direction*= -1.0f;
    }

    if(RectVsPoint(Rect({position.x-14.0f, position.y-12.0f}, {48.0f,48.0f}), level->camera.ScreenToWorld(game->GetMousePos(), {0.0f,0.0f})) && level->target_id == -1){
        if(item_state != BOMBER) level->target_id = GetID();
    }

    if(level->target_id == GetID() && game->GetMouse(0).bPressed){
        int potential_item_state = level->item_menu.GetSelectedItem(item_state);
        if(potential_item_state != NO_ITEM) item_state = potential_item_state;
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
        case DRILLER:
            anim_driller.Draw(_camera, {position.x-15.0f+8.0f, position.y-4.0f-std::rand()%3}, {1.0f, 1.0f});
            break;
        case PARACHUTER:
            anim_walk.Draw(_camera, {position.x-15.0f*direction+8.0f, position.y-4.0f}, {direction, 1.0f});
            break;
    }
    if(level->show_solid_layers) _camera->DrawDecal(position, game->asset_manager.GetDecal("pingu_wall_detector"));
    if(level->target_id == GetID()){
        anim_target.Update();
        anim_target.Draw(_camera, {position.x-16.0f, position.y-12.0f}, {1.0f, 1.0f});
    }
    else{
        anim_target.ResetAndPlay();
    }
}

std::string
Penguin::GetType(){return "Penguin";}