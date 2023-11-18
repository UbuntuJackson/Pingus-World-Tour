#include "state_load.h"
#include "pingus_world_tour.h"
#include <ufo/state.h>
#include <ufo/cellmap.h>

StateLoad::StateLoad(PingusWorldTour* _game,CellMap* _map, TypeRegistry *_registry): UfoLoad(_game,_map, _registry), game{_game}{}
void
StateLoad::OnLoadFinished(){
    game->game_state = &(game->play);
    game->play.Set();
}