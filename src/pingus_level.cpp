#include "pingus_level.h"
#include <ufo/level.h>
#include "pingus_world_tour.h"
#include "penguin.h"
#include <vector>
#include <string>

PingusLevel::PingusLevel(PingusWorldTour* _game, std::string _path) : Level(_path), game{_game}, item_menu{_game}, actor_id_count{0}{}

void
PingusLevel::NewActor(std::string _actor, int _x, int _y, std::string _layer){
    std::cout << _actor << std::endl;
    if(_actor == "Penguin"){
        actors.push_back(new Penguin(actor_id_count++, {(float)_x, (float){_y}}, game, this, _layer));
    }
}

void
PingusLevel::OnLoadFinished(){
    game->camera.SetStateMouseAndArrowKeys({0.0f, 0.0f}, map_size);
}

void
PingusLevel::Update(){
    if(!game->GetKey(olc::CTRL).bHeld) target_id = -1;
    deferred_actor_removals.clear();
    for(auto layer : layers){
        layer->Update();
    }
    for(auto act_id : deferred_actor_removals){
        RemoveActor(act_id);
    }
    item_menu.Update();
}

void
PingusLevel::Draw(Camera* _camera){
    for(auto layer : layers){
        layer->Draw(_camera);
    }
    item_menu.Draw();
}