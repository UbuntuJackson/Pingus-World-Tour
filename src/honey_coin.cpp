#include <ufo/camera.h>
#include <ufo/collision_body.h>
#include <ufo/json_interface.h>
#include "honey_coin.h"
#include "pingus_level.h"
#include "pingus_world_tour.h"
#include <ufo/game.h>
#include <string>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <cmath>

HoneyCoin::HoneyCoin(int _id, olc::vf2d _position, PingusWorldTour* _game, std::string _layer_tag) :
CollisionBody(_id, _position, _game, "honey_coin" ,_layer_tag),
anim_honey_coin(_game)
{

}

void
HoneyCoin::LoadActorFromFile(ujson::JsonNode* _json, int _id, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag){
    int sx = _json->GetJsonNode("x").GetAs<int>();
    int sy = _json->GetJsonNode("y").GetAs<int>();
    _level->actors.push_back(new HoneyCoin(_id, {(float)sx, (float)sy}, _game, _layer_tag));
}

void
HoneyCoin::Update(){
    velocity.y = std::sin(game->game_time * 1.5f) * 0.05f;
    position += velocity;
    anim_honey_coin.Update();
}

void
HoneyCoin::Draw(Camera* _camera){
    anim_honey_coin.Draw(_camera, position, {1.0f, 1.0f});
}

std::string
HoneyCoin::GetType(){
    return "HoneyCoin";
}