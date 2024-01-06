#ifndef ANIM_HONEY_COIN_H
#define ANIM_HONEY_COIN_H

#include <ufo/animation.h>
class PingusWorldTour;

class AnimHoneyCoin : public Animation{
public:
    PingusWorldTour* game;
    AnimHoneyCoin() = default;
    AnimHoneyCoin(PingusWorldTour* _game);
};

#endif