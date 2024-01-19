#ifndef PINGUS_EXIT
#define PINGUS_EXIT
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <ufo/collision_body.h>
#include <ufo/camera.h>
#include <string>
class PingusExit : public CollisionBody{
public:
    PingusExit(int _actor_id, olc::vf2d _position, Game *_game, std::string _layer) :
        CollisionBody(_actor_id, _position, _game, "goal", _layer){}
    void Draw(Camera* _camera){
        _camera->DrawDecal(position, game->asset_manager.GetDecal("goal"));
    }
    std::string GetType(){return "PingusExit";}
};

#endif