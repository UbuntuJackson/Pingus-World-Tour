#ifndef PENGUIN_H
#define PENGUIN_H

#include <ufo/collision_body.h>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include "anim_penguin_walk.h"
#include "anim_penguin_bomber.h"
#include "anim_target.h"
#include "anim_penguin_driller.h"
#include <ufo/json_interface.h>
class PingusWorldTour;
class PingusLevel;

class Penguin : public CollisionBody{
public:
    enum ItemStates{
        WALKER,
        FALLER,
        BOMBER,
        BUILDER,
        PARACHUTER,
        NO_ITEM,
        JUMPER,
        DRILLER
    };

    PingusWorldTour* game;
    PingusLevel* level;
    const float ACCELERATION_X = 0.42f;
    const float FRICTION_X = 0.78f;
    const float FRICTION_Y = 0.8f;
    float direction;
    int blow_up;
    int item_state;
    AnimPenguinWalk anim_walk;
    AnimPenguinBomber anim_bomber;
    AnimTarget anim_target;
    AnimPenguinDriller anim_driller;
    Penguin(int _id, olc::vf2d _position, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag);
    static void LoadActorFromFile(ujson::JsonNode* _json, int _id, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag);
    void Update();
    void Draw(Camera* _camera);
    std::string GetType();
};
#endif