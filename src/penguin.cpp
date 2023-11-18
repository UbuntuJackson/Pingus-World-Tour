#include "penguin.h"
#include <ufo/game.h>
#include "pingus_world_tour.h"
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

Penguin::Penguin(olc::vf2d _position, PingusWorldTour* _game) :
    CellActor(_position, _game),
    game{static_cast<PingusWorldTour*>(_game)},
    anim_walk(_game),
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
    velocity.y *= FRICTION_Y;
    velocity.y += 1.1f;
    velocity.x *= FRICTION_X;
    if(is_grounded) velocity.x += ACCELERATION_X*direction;
    ApplyCollisionNaive(&(game->map));
    if(IsOverlapping(&(game->map), game->asset_manager.GetDecal("pingu_wall_detector"), solid_layer, {position.x+direction, position.y})){
        direction*= -1.0f;
    }

    anim_walk.Update();
}

void
Penguin::Draw(Camera* _camera){
    anim_walk.Draw(_camera, {position.x-15.0f*direction+8.0f, position.y-4.0f}, {direction, 1.0f});
    //_camera->DrawDecal(position, game->asset_manager.GetDecal("penguin_hitbox"));
}