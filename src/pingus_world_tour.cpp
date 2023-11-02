#include "pingus_world_tour.h"
#include <ufo/cellmap.h>
#include <ufo/ufo_load.h>
#include "state_play.h"


PingusWorldTour::PingusWorldTour() : Game(), camera{Camera(this)}, map{CellMap(this)}{
    //registry = new CustomTypeRegistry(this);
    //load = StateLoad(this, &map, registry);
    game_state = &state_play;
}

void
PingusWorldTour::LoadResources(){
    asset_manager.LoadDecal("../external/UFO-Cells/res/misc/new_logo_centred_ufo_cells.png", "load");
}