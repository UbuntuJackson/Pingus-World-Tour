#include "anim_penguin_walk.h"
#include <ufo/animation.h>
#include "pingus_world_tour.h"
#include <string>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

AnimPenguinWalk::AnimPenguinWalk(PingusWorldTour* _game) : Animation(_game, olc::vf2d{32.0f, 32.0f}, 0.2f, "penguin_walking"), game{static_cast<PingusWorldTour*>(_game)}{
    current_anim = {0,1,2,3,4,5,6,7};
    Play();
}