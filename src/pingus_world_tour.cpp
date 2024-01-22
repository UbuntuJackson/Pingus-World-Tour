#include "pingus_world_tour.h"
#include "custom_type_registry.h"
#include "level_select.h"
#include "json_loading_test.h"
#include "play_level.h"
#include <ufo/level_loader.h>
#include <memory>
#include <utility>
#include <ufo/console.h>

PingusWorldTour::PingusWorldTour() : Game(){
}

void
PingusWorldTour::LoadResources(){

    Console::Out("Loading assets for pingus world tour");

    asset_manager.LoadDecal("../external/UFO-Cells/res/misc/new_logo_centred_ufo_cells.png", "load");
    asset_manager.LoadDecal("../res/assets/walking animation-Sheet.png", "penguin_walking");
    asset_manager.LoadDecal("../res/assets/pingu_blowing_up-Sheet.png", "penguin_bomber");
    asset_manager.LoadDecal("../res/assets/driller-Sheet.png", "penguin_driller");
    asset_manager.LoadDecal("../res/assets/target_icon-Sheet.png", "target");
    asset_manager.LoadDecal("../res/assets/honey_coint-Sheet.png", "anim_honey_coin");
    asset_manager.LoadDecal("../res/assets/honey_coin_mask.png", "honey_coin_hitbox");
    asset_manager.LoadDecal("../res/assets/pingu_hitbox_more_simple.png", "penguin_hitbox");
    asset_manager.LoadDecal("../res/assets/pingu_hitbox_more_simple_wall_detector.png", "pingu_wall_detector");
    asset_manager.LoadDecal("../res/assets/exit_simple.png", "goal");
    asset_manager.LoadDecal("../res/assets/dev_terrain_remover.png", "terrain_remover");
    asset_manager.LoadDecal("../res/assets/bomber_explostion_range.png", "bomber_explosion_range");
    asset_manager.LoadDecal("../res/assets/helicopter_placeholder.png", "helicopter");
    asset_manager.LoadDecal("../res/assets/widgets/exit_button_neutral.png", "exit_button_neutral");
    asset_manager.LoadDecal("../res/assets/widgets/exit_button_hover.png", "exit_button_hover");
    asset_manager.LoadDecal("../res/assets/widgets/exit_button_clicked.png", "exit_button_clicked");
    asset_manager.LoadDecal("../res/assets/widgets/restart_button_neutral.png", "restart_button_neutral");
    asset_manager.LoadDecal("../res/assets/widgets/restart_button_hover.png", "restart_button_hover");
    asset_manager.LoadDecal("../res/assets/widgets/restart_button_clicked.png", "restart_button_clicked");

    std::unique_ptr<PlayLevel> play_level = std::make_unique<PlayLevel>(&state_machine ,this, "../res/map/autumn_day_clear_the_way/autumn_day_clear_the_way.json");
    std::unique_ptr<LevelLoader> level_loader = std::make_unique<LevelLoader>(&state_machine, &(play_level.get()->level));
    state_machine.state_stack.push_back(std::move(play_level));
    state_machine.state_stack.push_back(std::move(level_loader));
}

void
PingusWorldTour::Reset(){
    std::string current_level_path = dynamic_cast<PlayLevel*>(state_machine.state_stack[state_machine.state_stack.size()-1].get())->level.path;
    state_machine.EmptyStack();
    std::unique_ptr<PlayLevel> play_level = std::make_unique<PlayLevel>(&state_machine ,this, current_level_path);
    std::unique_ptr<LevelLoader> level_loader = std::make_unique<LevelLoader>(&state_machine, &(play_level.get()->level));
    state_machine.state_stack.push_back(std::move(play_level));
    state_machine.state_stack.push_back(std::move(level_loader));
}

bool
PingusWorldTour::OnUserUpdate(float fElapsedTime){
    dt = fElapsedTime;
    Clear(olc::GREY);
    SetPixelMode(olc::Pixel::NORMAL);
    DrawDecal({0,0}, asset_manager.GetDecal("load"));
    state_machine.Update();
    game_time += fElapsedTime;
    SetPixelMode(olc::Pixel::NORMAL);
    return running;
}