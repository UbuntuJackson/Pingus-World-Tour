#ifndef PINGUS_LEVEL_H
#define PINGUS_LEVEL_H

#include <ufo/cellmap.h>
#include <iostream>
class PingusWorldTour;

class PingusLevel : public CellMap{
public:
    int actor_id_count;
    PingusWorldTour* game;
    PingusLevel(PingusWorldTour* _game);
    void NewActor(std::string _actor, int _x, int _y, std::string _layer);
};

#endif