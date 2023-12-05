#ifndef LEVEL_OBJECT_LAYER
#define LEVEL_OBJECT_LAYER

#include <ufo/layer.h>
#include <ufo/camera.h>
#include "pingus_level.h"
class LevelObjectLayer : public Layer{
public:
    PingusLevel* level;
    LevelObjectLayer(PingusLevel* _level) : Layer(_level, "", ""), level{_level}{}
    void Draw(Camera* _camera){
        for(auto goal : level-> goal_hitboxes){
            _camera->DrawDecal(goal.position, level->game->asset_manager.GetDecal("goal"));
        }
    }
};

#endif