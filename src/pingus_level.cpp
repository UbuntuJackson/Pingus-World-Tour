#include "pingus_level.h"
#include <ufo/level.h>
#include "pingus_world_tour.h"
#include "level_object_layer.h"
#include <ufo/layer_background.h>
#include <ufo/layer_solid.h>
#include <ufo/layer_terrain.h>
#include <ufo/layer_actor.h>
#include "penguin.h"
#include <vector>
#include <string>
#include <ufo/rect.h>
#include <ufo/cell_actor.h>
#include "pingus_exit.h"

PingusLevel::PingusLevel(PingusWorldTour* _game, std::string _path) : Level(_path), game{_game}, item_menu{_game}, actor_id_count{0}{}

void
PingusLevel::NewActor(std::string _actor, int _x, int _y, std::string _layer){
    std::cout << _actor << std::endl;
    if(_actor == "Penguin"){
        actors.push_back(new Penguin(actor_id_count++, {(float)_x, (float){_y}}, game, this, _layer));
    }
    if(_actor == "Goal"){
        goal_hitboxes.push_back(Rect({(float)_x, (float)_y}, {32.0f, 32.0f}));
        actors.push_back(new PingusExit(actor_id_count++, {(float)_x, (float){_y}}, game, _layer));
    }
}

Layer*
PingusLevel::NewLayer(std::string _name, std::string _type, std::vector<ActorInfo> _layer_info){
    if(_type == "actor"){
        return new LayerActor(this ,_name, _type, _layer_info);
    }
    
    if(_type == "level_object_layer"){
        return new LevelObjectLayer(this);
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
        if(target_id == act_id){
            target_id = -1;
        }
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