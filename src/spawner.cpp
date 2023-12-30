#include "spawner.h"
#include "pingus_world_tour.h"
#include "pingus_level.h"
#include <string>
#include <ufo/cell_actor.h>
#include <ufo/camera.h>
#include <string>

Spawner::Spawner(int _id, olc::vf2d _position, int _number_to_release, PingusWorldTour* _game, PingusLevel* _level, std::string _layer_tag) :
CellActor(_id, _position, _game, "", _layer_tag),
number_to_release{_number_to_release}
{

}

void
Spawner::Update(){

}

void
Spawner::Draw(Camera* _camera){}

std::string
Spawner::GetType(){
    return "Spawner"
}