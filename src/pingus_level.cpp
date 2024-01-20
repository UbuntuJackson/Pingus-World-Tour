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
#include <ufo/collision_body.h>
#include "pingus_exit.h"
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <ufo/json_interface.h>
#include <ufo/file_utils.h>
#include <iostream>
#include <ufo/colour_utils.h>
#include <ufo/timer.h>
#include "spawner.h"
#include "honey_coin.h"

PingusLevel::PingusLevel(PingusWorldTour* _game, std::string _path) :
Level(_path),
game{_game},
camera(_game),
actor_id_count{0},
rescued{0},
min_rescuable{0},
max_rescuable{0},
released{0},
number_of_honey_coins{0},
timer(_game)
{
    ReadLevelFromFile(_path); //Can i defer this call somehow?
}

bool PingusLevel::ReadLevelFromFile(std::string _path){
    std::string json_file_string = ReadFileToString(_path);
    ujson::JsonNode main_object = ujson::JsonNode(json_file_string);

    ujson::JsonNode score_requirements_object = main_object.GetJsonNode("score_requirements");
    int max_rescuable = score_requirements_object.GetJsonNode("max_rescuable").GetAs<int>();
    int min_rescuable = score_requirements_object.GetJsonNode("min_rescuable").GetAs<int>();
    
    item_menu = ItemMenu(game, &main_object);

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
                if(actor_name == "Penguin"){
                    Penguin::LoadActorFromFile(&actor_object, actor_id_count++, game, this, name);
                }
                if(actor_name == "Spawner"){
                    Spawner::LoadActorFromFile(&actor_object, actor_id_count++, game, this, name);
                }
                if(actor_name == "HoneyCoin"){
                    HoneyCoin::LoadActorFromFile(&actor_object, actor_id_count++, game, this, name);
                }
            }
        }
        if(type == "collision"){
            std::string type = layer_object.GetJsonNode("type").GetAs<std::string>();
            std::string name = layer_object.GetJsonNode("name").GetAs<std::string>();
            std::string path = layer_object.GetJsonNode("path").GetAs<std::string>();
            destructable_layer_keys.push_back(name);
            layers.push_back(new LayerSolid(this, name, type, path));
        }
        if(type == "terrain"){
            std::string type = layer_object.GetJsonNode("type").GetAs<std::string>();
            std::string name = layer_object.GetJsonNode("name").GetAs<std::string>();
            std::string path = layer_object.GetJsonNode("path").GetAs<std::string>();
            destructable_layer_keys.push_back(name);
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

Layer*
PingusLevel::NewLayer(std::string _name, std::string _type, std::vector<ActorInfo> _layer_info){
    if(_type == "actor"){
        return new LayerActor(this ,_name, _type, _layer_info);
    }
    
    if(_type == "level_object_layer"){
        return new LevelObjectLayer(this);
    }
}

bool
PingusLevel::IsOverlappingOtherDecal(olc::Decal *_decal, olc::vf2d _position, olc::Decal *_other_decal, olc::vf2d _other_position, olc::Pixel _colour){

    for(int y = int(_position.y); y < int(_position.y) + _decal->sprite->Size().y; y++){
        for(int x = int(_position.x); x < int(_position.x) + _decal->sprite->Size().x; x++){
            if(CompareColour(_decal->sprite->GetPixel(x- int(_position.x), y- int(_position.y)), olc::WHITE)
                && CompareColour(_other_decal->sprite->GetPixel(x - int(_other_position.x), y - int(_other_position.y)), _colour)
            ){
                return true;
            }
        }
    }
    return false;
}

bool
PingusLevel::IsDestructable(olc::vf2d _position, std::string _shape_key){
    olc::Decal* shape_decal = game->asset_manager.GetDecal(_shape_key);
    olc::Decal* solid_decal = level_decals.at(solid_decal_key);
    if(solid_decal->sprite->GetPixel(_position) == olc::WHITE){
        return true;
    }
    return false;
}

void
PingusLevel::Destruct(olc::vf2d _position, std::string _shape_key){

    olc::Decal* shape_decal = game->asset_manager.GetDecal(_shape_key);
    for(auto destructable_layer_key : destructable_layer_keys){
        olc::Decal* layer_decal = level_decals.at(destructable_layer_key);
        for(int y = int(_position.y); y < int(_position.y) + shape_decal->sprite->Size().y; y++){
            for(int x = int(_position.x); x < int(_position.x) + shape_decal->sprite->Size().x; x++){
                if(IsDestructable({x, y}, _shape_key) &&
                    CompareColour(shape_decal->sprite->GetPixel(x-(int)_position.x, y-(int)_position.y), olc::WHITE)){
                    layer_decal->sprite->SetPixel(x, y, olc::Pixel(0,0,0,0));
                }
                
            }
        }
        layer_decal->Update();
    }
}

void
PingusLevel::OnLoadFinished(){
    camera.SetStateMouseAndArrowKeys({0.0f, 0.0f}, map_size);
    timer.Start(30.0f);
}

void
PingusLevel::Update(){
    if(!game->GetKey(olc::CTRL).bHeld) target_id = -1;
    if(game->GetKey(olc::I).bPressed) show_solid_layers = !show_solid_layers;
    deferred_actor_removals.clear();
    if(game->GetMouse(1).bPressed){
        std::cout << "ran" << std::endl;
        honey_coin.New(actor_id_count++, camera.ScreenToWorld(game->GetMousePos() ,{0.0f,0.0f}), game , "actors");
    }
    if(game->GetMouse(2).bPressed){
        std::cout << "ran" << std::endl;
        penguin.New(actor_id_count++, camera.ScreenToWorld(game->GetMousePos() ,{0.0f,0.0f}), game, this, "actors");
    }
    for(auto layer : layers){
        layer->Update();
    }
    for(auto actor : new_actors){
        actors.push_back(actor);
    }
    new_actors.clear();
    for(auto act_id : deferred_actor_removals){
        if(target_id == act_id){
            target_id = -1;
        }
        RemoveActor(act_id);
    }
    item_menu.Update();
}

void
PingusLevel::Draw(){
    for(auto layer : layers){
        layer->Draw(&camera);
    }
    item_menu.Draw();
    float stats_x_position = 700.0f;
    game->DrawStringDecal({stats_x_position, 20.0f}, "Rescued: " + std::to_string(rescued) + "/" + std::to_string(min_rescuable), olc::DARK_CYAN,{2.0f, 2.0f});
    game->DrawStringDecal({stats_x_position, 40.0f}, "Released: " + std::to_string(released) + "/" + "?", olc::DARK_CYAN,{2.0f, 2.0f});
    game->DrawStringDecal({stats_x_position, 60.0f}, "Time: " + std::to_string((int)(timer.GetTimeSinceStart())), olc::DARK_CYAN, {2.0f, 2.0f});
    game->DrawStringDecal({game->ScreenWidth()-450.0f, 20.0f}, "Honey-coins: x " + std::to_string(number_of_honey_coins), olc::DARK_YELLOW, {2.0f, 2.0f});
    if(show_solid_layers) game->DrawStringDecal(
        game->GetMousePos(),
        std::to_string(camera.ScreenToWorld(game->GetMousePos(), {0.0f, 0.0f}).x) + ", " +
        std::to_string(camera.ScreenToWorld(game->GetMousePos(), {0.0f, 0.0f}).y),
        olc::VERY_DARK_GREY, {2.0f, 2.0f});
}