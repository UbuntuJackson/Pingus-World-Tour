#include "custom_type_registry.h"
#include <ufo/cell_actor.h>
#include <string>
#include <ufo/layer.h>
#include "pingus_world_tour.h"
#include <ufo/layer_background.h>
#include <ufo/layer_solid.h>
#include <ufo/layer_actor.h>
#include <ufo/layer_terrain.h>
#include <ufo/actor_info.h>
#include <vector>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"
#include "penguin.h"
#include <iostream>

CustomTypeRegistry::CustomTypeRegistry(PingusWorldTour* _game):
    game{_game},
    id{0}{}

CellActor*
CustomTypeRegistry::NewActor(std::string _actor, olc::vf2d _position){
    /*if(_actor == "Penguin"){
        return new Penguin(id++, _position, game);
    }*/
}