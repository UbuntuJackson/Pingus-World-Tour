#include "pingus_level.h"
#include "pingus_world_tour.h"
#include "penguin.h"
#include <vector>

PingusLevel::PingusLevel(PingusWorldTour* _game) : CellMap(_game), game{_game}, actor_id_count{0}{}

void
PingusLevel::NewActor(std::string _actor, int _x, int _y, std::string _layer){
    std::cout << _actor << std::endl;
    if(_actor == "Penguin"){
        actors.push_back(new Penguin(actor_id_count++, {(float)_x, (float){_y}}, game, _layer));
    }
}