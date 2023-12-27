#include "play_level.h"
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include <string>
#include <ufo/stack_based_state_machine.h>

PlayLevel::PlayLevel(StackBasedStateMachine* _state_machine,PingusWorldTour *_game, std::string _path) :
StackBasedState(_state_machine),
level(_game, _path),
game{_game}
{
}

void
PlayLevel::Update(){
    if(game->GetMouse(1).bHeld) level.Destruct(game->camera.ScreenToWorld(game->GetMousePos(), {0.0f, 0.0f}), "terrain_remover");
    std::cout << game->camera.ScreenToWorld(game->GetMousePos(), {0.0f, 0.0f}) << std::endl;
    level.Update();
    level.Draw(&(game->camera));
    if(game->GetKey(olc::ESCAPE).bPressed){
        game->Reset();
    }
}

void
PlayLevel::Draw(){}