#ifndef CUSTOM_TYPE_REGISTRY_H
#define CUSTOM_TYPE_REGISTRY_H

class CellActor;
class Layer;
class PingusWorldTour;
#include <string>
#include <ufo/type_registry.h>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

class CustomTypeRegistry : public TypeRegistry{
public:
    PingusWorldTour *game;
    int id;
    CustomTypeRegistry(PingusWorldTour* _game);
    CellActor* NewActor(std::string _actor, olc::vf2d _position);
};

#endif