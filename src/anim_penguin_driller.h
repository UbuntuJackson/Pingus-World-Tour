#ifndef ANIM_PENGUIN_DRILLER_H
#define ANIM_PENGUIN_DRILLER_H

#include <ufo/animation.h>
class PingusWorldTour;

class AnimPenguinDriller : public Animation{
public:
    PingusWorldTour* game;
    AnimPenguinDriller() = default;
    AnimPenguinDriller(PingusWorldTour* _game);
};

#endif