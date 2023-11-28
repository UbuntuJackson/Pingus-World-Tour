#ifndef PLAY_H
#define PLAY_H

#include <ufo/stack_based_state.h>
#include <ufo/stack_based_state_machine.h>
#include "pingus_world_tour.h"
#include <string>

class PlayLevel : public StackBasedState{
public:
    PingusWorldTour* game;
    PlayLevel() = default;
    PlayLevel(StackBasedStateMachine* _state_machine, PingusWorldTour* _game, std::string _path);
    void Update();
    void Draw();
};

#endif