#ifndef PINGUS_LEVEL_H
#define PINGUS_LEVEL_H

#include <ufo/level.h>
#include <iostream>
#include "item_menu.h"
#include <vector>
#include <string>
#include <ufo/rect.h>
#include <ufo/actor_info.h>

class PingusWorldTour;

class PingusLevel : public Level{
public:
    int released;
    int max_rescuable;
    int min_rescuable;
    int rescued;
    int number_of_honey_coins;
    ItemMenu item_menu;
    int actor_id_count;
    int target_id = -1;
    std::string solid_decal_key = "solid";
    std::vector<std::string> destructable_layer_keys;
    std::vector<Rect> goal_hitboxes;
    PingusWorldTour* game;
    PingusLevel() = default;
    PingusLevel(PingusWorldTour* _game, std::string _path);
    template <typename ... Args>
    void NewActor(std::string _actor, int _x, int _y, std::string _layer_tag, Args&& ... args);
    Layer* NewLayer(std::string _name, std::string _type, std::vector<ActorInfo> _layer_info);
    bool IsOverlappingOtherDecal(olc::Decal *_decal, olc::vf2d _position, olc::Decal *_other_decal, olc::vf2d _other_position, olc::Pixel _colour);
    bool IsDestructable(olc::vf2d _position, std::string _shape_key);
    void Destruct(olc::vf2d _position, std::string _shape_key);
    void Update();
    bool ReadLevelFromFile(std::string _path);
    void OnLoadFinished();
    void Draw(Camera* _camera);
};

#endif