#ifndef HONEY_COIN_H
#define HONEY_COIN_H

#include <ufo/collision_body.h>
#include "anim_honey_coin.h"
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <string>

class PingusLevel;
class Camera;

class HoneyCoin : public CollisionBody{
public:
    AnimHoneyCoin anim_honey_coin;
    HoneyCoin(int _id, olc::vf2d _position, PingusWorldTour* _game,std::string _layer_tag);
    static void LoadActorFromFile(ujson::JsonNode* _json, int _id, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag);
    void Update();
    void Draw(Camera* _camera);
    std::string GetType();
};

#endif