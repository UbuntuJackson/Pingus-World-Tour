#include "play_level.h"
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include <string>
#include <ufo/stack_based_state_machine.h>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include "penguin.h"

PlayLevel::PlayLevel(StackBasedStateMachine* _state_machine,PingusWorldTour *_game, std::string _path) :
state_machine{_state_machine},
level(_game, _path),
game{_game},
exit_button(_game, game->GetScreenSize()-olc::vf2d(20.0f+64.0f, 20.0f+64.0f), "exit_button_neutral", "exit_button_hover", "exit_button_clicked"),
restart_button(_game, game->GetScreenSize()-olc::vf2d(40.0f+128.0f, 20.0f+64.0f), "restart_button_neutral", "restart_button_hover", "restart_button_clicked")
{
}

bool
PlayLevel::Load(){
    return level.Load();
}

void
PlayLevel::Update(){
    level.Update();
    level.Draw();
    exit_button.Draw(&(level.camera));
    restart_button.Draw(&(level.camera));
    if(exit_button.Clicked()){}
    if(restart_button.Clicked()){
        game->Reset();
        return;
    }
    if(game->GetKey(olc::ESCAPE).bPressed){
        game->Reset();
    }
}

void
PlayLevel::Draw(){}