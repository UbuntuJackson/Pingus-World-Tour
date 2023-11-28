#ifndef ISLAND_H
#define ISLAND_H
#include <ufo/state.h>
#include <ufo/game.h>
#include <ufo/level.h>
#include <ufo/camera.h>
#include <ufo/ufo_load.h>
#include "state_load.h"
#include "state_play.h"
#include "custom_type_registry.h"
#include "pingus_camera.h"
#include <ufo/level.h>
#include <ufo/level_loader.h>
#include <ufo/stack_based_state_machine.h>
#include "play_level.h"
#include "pingus_level.h"


class CustomTypeRegistry;
class PingusWorldTour : public Game{
public:
    StackBasedStateMachine state_machine;
    PingusCamera camera;
    PingusWorldTour();
    void LoadResources();
    bool OnUserUpdate(float fElapsedTime);
    void Reset();
};

#endif