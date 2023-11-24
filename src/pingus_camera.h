#ifndef PINGUS_CAMERA
#define PINGUS_CAMERA
#include <ufo/camera.h>
class Game;
class PingusCamera : public Camera{
public:
    PingusCamera() = default;
    PingusCamera(Game* _game);
    void ControlZoom();
};

#endif