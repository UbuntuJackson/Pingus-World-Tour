#ifndef ISLAND_H
#define ISLAND_H
#include <ufo/game.h>
#include <ufo/level.h>
#include <ufo/camera.h>
#include "custom_type_registry.h"
#include "pingus_camera.h"
#include <ufo/stack_based_state_machine.h>


class CustomTypeRegistry;
class PingusWorldTour : public Game{
public:
    StackBasedStateMachine state_machine;
    PingusWorldTour();
    void LoadResources();
    bool OnUserUpdate(float fElapsedTime);
    void Reset();
};

#endif