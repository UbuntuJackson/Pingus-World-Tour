#ifndef ANIM_PENGUIN_BOMBER_H
#define ANIM_PENGUIN_BOMBER_H

#include <ufo/animation.h>
class PingusWorldTour;

class AnimPenguinBomber : public Animation{
public:
    PingusWorldTour* game;
    AnimPenguinBomber() = default;
    AnimPenguinBomber(PingusWorldTour* _game);
    void UpdateStateLogic();
};

#endif