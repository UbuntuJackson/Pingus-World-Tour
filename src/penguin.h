#ifndef PENGUIN_H
#define PENGUIN_H

#include <ufo/cell_actor.h>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include "anim_penguin_walk.h"
class PingusWorldTour;

class Penguin : public CellActor{
public:
    PingusWorldTour* game;
    const float ACCELERATION_X = 0.42f;
    const float FRICTION_X = 0.78f;
    const float FRICTION_Y = 0.8f;
    float direction;
    int blow_up;
    AnimPenguinWalk anim_walk;
    Penguin(olc::vf2d _position, PingusWorldTour* _game);
    void Update();
    void Draw(Camera* _camera);
};
#endif