#ifndef ISLAND_H
#define ISLAND_H
#include <ufo/state.h>
#include <ufo/game.h>
#include <ufo/cellmap.h>
#include <ufo/camera.h>
#include <ufo/ufo_load.h>
#include "state_load.h"
#include "state_play.h"
#include "custom_type_registry.h"
#include "pingus_level.h"
#include "pingus_camera.h"

class CustomTypeRegistry;
class PingusWorldTour : public Game{
public:
    PingusCamera camera;
    PingusLevel map;
    StatePlay play;
    State menu;
    StateLoad load;
    CustomTypeRegistry registry;
    PingusWorldTour();
    void LoadResources();
};

#endif