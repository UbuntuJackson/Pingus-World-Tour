#ifndef ANIM_TARGET_H
#define ANIM_TARGET_H

#include <ufo/animation.h>
class PingusWorldTour;

class AnimTarget : public Animation{
public:
    PingusWorldTour* game;
    AnimTarget() = default;
    AnimTarget(PingusWorldTour* _game);
    void UpdateStateLogic();
};

#endif