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
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <ufo/json_interface.h>
#include <ufo/file_utils.h>
#include <iostream>
#include <utility>

PingusLevel::PingusLevel(PingusWorldTour* _game, std::string _path) :
    Level(_path),
    game{_game},
    item_menu{_game},
    actor_id_count{0},
    rescued{0},
    min_rescuable{0},
    max_rescuable{0},
    released{0},
    number_of_honey_coins{0}{
        ReadLevelFromFile(_path); //Can i defer this call somehow?
    }

bool PingusLevel::ReadLevelFromFile(std::string _path){
    std::string json_file_string = ReadFileToString(_path);
    ujson::JsonNode main_object = ujson::JsonNode(json_file_string);

    ujson::JsonNode score_requirements_object = main_object.GetJsonNode("score_requirements");
    int max_rescuable = score_requirements_object.GetJsonNode("max_rescuable").GetAs<int>();
    int min_rescuable = score_requirements_object.GetJsonNode("min_rescuable").GetAs<int>();
    
    std::vector<ujson::JsonNode> layer_objects = main_object.GetJsonNode("layers").GetAs<std::vector<ujson::JsonNode>>();
    std::cout << "a" << std::endl;
    for(auto layer_object : layer_objects){
        std::string type = layer_object.GetJsonNode("type").GetAs<std::string>();
        std::string name = layer_object.GetJsonNode("name").GetAs<std::string>();
        std::cout << type << std::endl;
        if(type == "actor"){
            std::vector<ActorInfo> actors_to_create;
            layers.push_back(new LayerActor(this, name, type, actors_to_create));
            std::vector<ujson::JsonNode> actor_objects = layer_object.GetJsonNode("actors").GetAs<std::vector<ujson::JsonNode>>();
            for(auto actor_object : actor_objects){
                std::string actor_name = actor_object.GetJsonNode("actor").GetAs<std::string>();
                int x = actor_object.GetJsonNode("x").GetAs<int>();
                int y = actor_object.GetJsonNode("y").GetAs<int>();
                /*if(actor_name == "Spawner"){
                    std::cout << "Spawner" << std::endl;
                    NewActor(actor_name, x, y, name);
                }*/
                if(actor_name == "Penguin"){
                    NewActor(actor_name, x, y, name);
                }
            }
        }
        if(type == "collision"){
            std::string type = layer_object.GetJsonNode("type").GetAs<std::string>();
            std::string name = layer_object.GetJsonNode("name").GetAs<std::string>();
            std::string path = layer_object.GetJsonNode("path").GetAs<std::string>();
            layers.push_back(new LayerSolid(this, name, type, path));
        }
        if(type == "terrain"){
            std::string type = layer_object.GetJsonNode("type").GetAs<std::string>();
            std::string name = layer_object.GetJsonNode("name").GetAs<std::string>();
            std::string path = layer_object.GetJsonNode("path").GetAs<std::string>();
            layers.push_back(new LayerTerrain(this, name, type, path));
        }
        if(type == "background"){
            std::string type = layer_object.GetJsonNode("type").GetAs<std::string>();
            std::string name = layer_object.GetJsonNode("name").GetAs<std::string>();
            std::string path = layer_object.GetJsonNode("path").GetAs<std::string>();
            layers.push_back(new LayerBackground(this, name, type, path));
        }
    }

    main_object.JsonNodeDelete();
}

template <typename ... Args>
void
PingusLevel::NewActor(std::string _actor, int _x, int _y, std::string _layer_tag, Args&& ... args){
    if(_actor == "Penguin"){
        released++;
        actors.push_back(new Penguin(actor_id_count++, {(float)_x, (float)_y}, game, this, _layer_tag));
    }
    /*if(_actor == "Goal"){
        goal_hitboxes.push_back(Rect({(float)_x, (float)_y}, {32.0f, 32.0f}));
        actors.push_back(new PingusExit(std::forward<Args>(args)...));
    }*/
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
    float stats_x_position = 700.0f;
    game->DrawStringDecal({stats_x_position, 20.0f}, "Rescued: " + std::to_string(rescued) + "/" + std::to_string(min_rescuable), olc::DARK_CYAN,{2.0f, 2.0f});
    game->DrawStringDecal({stats_x_position, 40.0f}, "Released: " + std::to_string(released) + "/" + "?", olc::DARK_CYAN,{2.0f, 2.0f});
}