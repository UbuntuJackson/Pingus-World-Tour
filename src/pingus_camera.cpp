#include "pingus_camera.h"
#include <ufo/camera.h>
#include <ufo/game.h>
PingusCamera::PingusCamera(Game* _game) : Camera(_game) {}

void
PingusCamera::ControlZoom(){
    if(game->GetMouseWheel() >= 1 && game->GetKey(olc::SHIFT).bHeld) scale *= 1.05f;
    if(game->GetMouseWheel() <= -1 && game->GetKey(olc::SHIFT).bHeld) scale *= (1.0f/1.05f);
}