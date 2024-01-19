#ifndef SPAWNER_H
#define SPAWNER_H
#include <ufo/collision_body.h>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include <ufo/timer.h>
#include <ufo/json_interface.h>

class PingusLevel;
class PingusWorldTour;

class Spawner : public CollisionBody{
public:
    int number_to_release;
    Timer drop_timer;
    PingusWorldTour* game;
    PingusLevel* level;
    Spawner(int _id, olc::vf2d _position, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag, int _number_to_release);
    static void LoadActorFromFile(ujson::JsonNode* _json, int _id, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag);
    void Update();
    void Draw(Camera* _camera);
    std::string GetType();

};

#endif