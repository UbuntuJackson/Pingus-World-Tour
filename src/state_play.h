#ifndef STATE_PLAY_H
#define STATE_PLAY_H

#include <ufo/state.h>

class PingusWorldTour;

class StatePlay : public State{
public:
    PingusWorldTour *game;
    StatePlay() = default;
    StatePlay(PingusWorldTour* _game);
    void Set();
    void Update();
};

#endif