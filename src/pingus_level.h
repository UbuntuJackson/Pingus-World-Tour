#ifndef PINGUS_LEVEL_H
#define PINGUS_LEVEL_H

#include <ufo/level.h>
#include <iostream>
#include "item_menu.h"
#include <string>

class PingusWorldTour;

class PingusLevel : public Level{
public:
    int max_rescuable;
    int min_rescuable;
    int rescued;
    int number_of_honey_coins;
    ItemMenu item_menu;
    int actor_id_count;
    int target_id = -1;
    PingusWorldTour* game;
    PingusLevel() = default;
    PingusLevel(PingusWorldTour* _game, std::string _path);
    void NewActor(std::string _actor, int _x, int _y, std::string _layer);
    void Update();
    void OnLoadFinished();
    void Draw(Camera* _camera);
};

#endif