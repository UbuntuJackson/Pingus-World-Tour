#ifndef PINGUS_WORLD_TOUR_H
#define PINGUS_WORLD_TOUR_H

#include <ufo/game.h>
#include <ufo/camera.h>
#include <ufo/cellmap.h>
#include <ufo/ufo_load.h>
#include "state_play.h"

class PingusTypeRegistry;
class PingusWorldTour : public Game{
public:
    Camera camera;
    CellMap map;
    StatePlay state_play;
    PingusWorldTour();
    void LoadResources();

};

#endif