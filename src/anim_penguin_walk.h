#ifndef ANIM_PENGUIN_WALK_H
#define ANIM_PENGUIN_WALK_H

#include <ufo/animation.h>
class PingusWorldTour;

class AnimPenguinWalk : public Animation{
public:
    PingusWorldTour* game;
    AnimPenguinWalk() = default;
    AnimPenguinWalk(PingusWorldTour* _game);
    void UpdateLogic();
};

#endif