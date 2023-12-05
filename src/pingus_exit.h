#ifndef PINGUS_EXIT
#define PINGUS_EXIT
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <ufo/cell_actor.h>
#include <ufo/camera.h>
class PingusExit : public CellActor{
public:
    PingusExit(int _actor_id, olc::vf2d _position, Game *_game, std::string _layer) :
        CellActor(_actor_id, _position, _game, "goal", _layer){}
    void Draw(Camera* _camera){
        _camera->DrawDecal(position, game->asset_manager.GetDecal("goal"));
    }
};

#endif