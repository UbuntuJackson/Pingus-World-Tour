#ifndef STATE_LOAD_H
#define STATE_LOAD_H

#include <ufo/ufo_load.h>


class PingusWorldTour;

class StateLoad : public UfoLoad{
    PingusWorldTour* game;
public:
    StateLoad() = default;
    StateLoad(PingusWorldTour *_game,CellMap* _map, TypeRegistry *_registry);
    void OnLoadFinished();
};

#endif