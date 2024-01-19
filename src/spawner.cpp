#include "spawner.h"
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include <string>
#include <ufo/collision_body.h>
#include <ufo/camera.h>
#include <string>
#include <ufo/json_interface.h>
#include "penguin.h"
#include <cmath>

Spawner::Spawner(int _id, olc::vf2d _position, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag, int _number_to_release) :
CollisionBody(_id, _position, _game, "", _layer_tag),
game{static_cast<PingusWorldTour*>(_game)},
number_to_release{_number_to_release},
level{_level},
drop_timer(_game)
{
    drop_timer.Start(0.0f);
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
        drop_timer.Start(3.0f);
        level->released++;
        level->new_actors.push_back(new Penguin(level->actor_id_count++, position, game, level, layer_tag));
    }
}

void
Spawner::Draw(Camera* _camera){
    _camera->DrawDecal(position-olc::vf2d(50.0f,50.0f), game->asset_manager.GetDecal("helicopter"));
}

std::string
Spawner::GetType(){
    return "Spawner";
}