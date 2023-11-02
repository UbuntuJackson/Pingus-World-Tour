#ifndef STATE_LOAD
#define STATE_LOAD
#include <ufo/ufo_load.h>


class PingusWorldTour;

class StateLoad : public UfoLoad{
    Island* game;
public:
    StateLoad() = default;
    StateLoad(PingusWorldTour *_game,CellMap* _map, PingusWorldTour *_registry);
    void OnLoadFinished();
};

#endif