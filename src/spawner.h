#ifndef SPAWNER_H
#define SPAWNER_H
#include <ufo/cell_actor.h>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

class Spawner : public CellActor{
public:
    int number_to_release;
    Spawner(int _id, olc::vf2d _position, int _number_to_release, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag);
    void Update();
    void Draw(Camera* _camera)
    std::string GetType();

};

#endif