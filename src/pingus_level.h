#ifndef PINGUS_LEVEL_H
#define PINGUS_LEVEL_H

#include <ufo/cellmap.h>
#include <iostream>
#include "item_menu.h"
class PingusWorldTour;

class PingusLevel : public CellMap{
public:
    int max_rescuable;
    int min_rescuable;
    int rescued;
    int number_of_honey_coins;
    ItemMenu item_menu;
    int actor_id_count;
    int target_id = -1;
    PingusWorldTour* game;
    PingusLevel(PingusWorldTour* _game);
    void NewActor(std::string _actor, int _x, int _y, std::string _layer);
    void Update();
    void Draw(Camera* _camera);
};

#endif