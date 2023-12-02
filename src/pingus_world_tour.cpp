#include "pingus_world_tour.h"
#include <ufo/cellmap.h>
#include <ufo/ufo_load.h>
#include "custom_type_registry.h"
#include "state_load.h"
#include "level_select.h"

PingusWorldTour::PingusWorldTour() : Game(), camera(this){
}

void
PingusWorldTour::LoadResources(){

    asset_manager.LoadDecal("../external/UFO-Cells/res/misc/new_logo_centred_ufo_cells.png", "load");
    asset_manager.LoadDecal("../res/assets/walking animation-Sheet.png", "penguin_walking");
    asset_manager.LoadDecal("../res/assets/pingu_blowing_up-Sheet.png", "penguin_bomber");
    asset_manager.LoadDecal("../res/assets/target_icon-Sheet.png", "target");
    asset_manager.LoadDecal("../res/assets/pingu_hitbox.png", "penguin_hitbox");
    asset_manager.LoadDecal("../res/assets/pingu_wall_detector.png", "pingu_wall_detector");

    //PlayLevel* play_level = new PlayLevel(&state_machine ,this, "../res/map/pingus_first_level/pingus_first_level.json");
    //state_machine.state_stack.push_back(play_level);
    //state_machine.state_stack.push_back(new LevelLoader(&state_machine, &(play_level->level)));
    state_machine.state_stack.push_back(new LevelSelect(&state_machine));
}

void
PingusWorldTour::Reset(){
    state_machine.EmptyStack();
    PlayLevel* play_level = new PlayLevel(&state_machine ,this, "../res/map/pingus_first_level/pingus_first_level.json");
    state_machine.state_stack.push_back(play_level);
    state_machine.state_stack.push_back(new LevelLoader(&state_machine, &(play_level->level)));
}

bool
PingusWorldTour::OnUserUpdate(float fElapsedTime){
    dt = fElapsedTime;
    Clear(olc::GREY);
    SetPixelMode(olc::Pixel::NORMAL);
    DrawDecal({0,0}, asset_manager.GetDecal("load"));
    state_machine.Update();

    SetPixelMode(olc::Pixel::NORMAL);
    return running;
}