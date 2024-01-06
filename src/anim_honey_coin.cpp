#include "anim_honey_coin.h"
#include <ufo/animation.h>
#include "pingus_world_tour.h"
#include <string>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

AnimHoneyCoin::AnimHoneyCoin(PingusWorldTour* _game) : Animation(_game, olc::vf2d{32.0f, 32.0f}, 0.05f, "anim_honey_coin"), game{static_cast<PingusWorldTour*>(_game)}{
    current_anim = {0,1};
    Play();
}