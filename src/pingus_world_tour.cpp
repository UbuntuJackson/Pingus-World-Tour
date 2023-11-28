#include "pingus_world_tour.h"
#include <ufo/cellmap.h>
#include <ufo/ufo_load.h>
#include "custom_type_registry.h"
#include "state_load.h"

PingusWorldTour::PingusWorldTour() : Game(), camera(this){
    state_machine.state_stack.push_back(new PlayLevel(&state_machine ,this, "../res/map/pingus_first_level/pingus_first_level.json"));
    map = PingusLevel(this, "../res/map/pingus_first_level/pingus_first_level.json");
    state_machine.state_stack.push_back(new LevelLoader(&state_machine, &map));
}

void
PingusWorldTour::LoadResources(){
    asset_manager.LoadDecal("../external/UFO-Cells/res/misc/new_logo_centred_ufo_cells.png", "load");
    asset_manager.LoadDecal("../res/assets/walking animation-Sheet.png", "penguin_walking");
    asset_manager.LoadDecal("../res/assets/pingu_blowing_up-Sheet.png", "penguin_bomber");
    asset_manager.LoadDecal("../res/assets/target_icon-Sheet.png", "target");
    asset_manager.LoadDecal("../res/assets/pingu_hitbox.png", "penguin_hitbox");
    asset_manager.LoadDecal("../res/assets/pingu_wall_detector.png", "pingu_wall_detector");
}

bool
PingusWorldTour::OnUserUpdate(float fElapsedTime){
    dt = fElapsedTime;
    Clear(olc::GREY);
    SetPixelMode(olc::Pixel::NORMAL);

    state_machine.Update();

    SetPixelMode(olc::Pixel::NORMAL);
    return running;
}