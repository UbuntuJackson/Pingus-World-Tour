#include "play_level.h"
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include <string>
#include <ufo/stack_based_state_machine.h>
#include "penguin.h"

PlayLevel::PlayLevel(StackBasedStateMachine* _state_machine,PingusWorldTour *_game, std::string _path) :
StackBasedState(_state_machine),
level(_game, _path),
game{_game}
{
}

void
PlayLevel::Update(){
    level.Update();
    level.Draw();
    if(game->GetKey(olc::ESCAPE).bPressed){
        game->Reset();
    }
}

void
PlayLevel::Draw(){}