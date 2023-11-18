#ifndef PENGUIN_H
#define PENGUIN_H

#include <ufo/cell_actor.h>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include "anim_penguin_walk.h"
#include "anim_penguin_bomber.h"
#include "anim_target.h"
class PingusWorldTour;

class Penguin : public CellActor{
public:
    enum ItemStates{
        WALKER,
        BOMBER
    };

    PingusWorldTour* game;
    const float ACCELERATION_X = 0.42f;
    const float FRICTION_X = 0.78f;
    const float FRICTION_Y = 0.8f;
    float direction;
    int blow_up;
    int item_state;
    AnimPenguinWalk anim_walk;
    AnimPenguinBomber anim_bomber;
    AnimTarget anim_target;
    Penguin(olc::vf2d _position, PingusWorldTour* _game);
    void Update();
    void Draw(Camera* _camera);
};
#endif