#include "play_level.h"
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include <string>
#include <ufo/stack_based_state_machine.h>

PlayLevel::PlayLevel(StackBasedStateMachine* _state_machine,PingusWorldTour *_game, std::string _path) :
StackBasedState(_state_machine),
game{_game}
{
}

void
PlayLevel::Update(){
    game->map.Update();
    game->map.Draw(&(game->camera));
}

void
PlayLevel::Draw(){}