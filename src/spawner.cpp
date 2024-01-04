#include "spawner.h"
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include <string>
#include <ufo/cell_actor.h>
#include <ufo/camera.h>
#include <string>
#include <ufo/json_interface.h>
#include "penguin.h"
#include <cmath>

Spawner::Spawner(int _id, olc::vf2d _position, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag, int _number_to_release) :
CellActor(_id, _position, _game, "", _layer_tag),
game{static_cast<PingusWorldTour*>(_game)},
number_to_release{_number_to_release},
level{_level},
drop_timer(_game)
{
    drop_timer.Start(10.0f);
}

void
Spawner::LoadActorFromFile(ujson::JsonNode* _json, int _id, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag){
    int sx = _json->GetJsonNode("x").GetAs<int>();
    int sy = _json->GetJsonNode("y").GetAs<int>();
    int sn = _json->GetJsonNode("number_of_penguins").GetAs<int>();
    _level->released++;
    _level->actors.push_back(new Spawner(_id, {(float)sx, (float)sy}, _game, _level, _layer_tag, sn));
}

void
Spawner::Update(){
    if(drop_timer.TimeOut() && level->released < number_to_release){
        level->released++;
        //level->actors.emplace_back(new Penguin(level->actor_id_count++, position, game, level, layer_tag));
    }
}

void
Spawner::Draw(Camera* _camera){}

std::string
Spawner::GetType(){
    return "Spawner";
}