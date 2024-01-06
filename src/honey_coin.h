#ifndef HONEY_COIN_H
#define HONEY_COIN_H

#include <ufo/cell_actor.h>
#include "anim_honey_coin.h"
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

class PingusLevel;
class Camera;

class HoneyCoin : public CellActor{
public:
    AnimHoneyCoin anim_honey_coin;
    HoneyCoin(int _id, olc::vf2d _position, PingusWorldTour* _game,std::string _layer_tag);
    static void LoadActorFromFile(ujson::JsonNode* _json, int _id, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag);
    void Update();
    void Draw(Camera* _camera);
};

#endif