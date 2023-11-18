#include "anim_penguin_bomber.h"
#include <ufo/animation.h>
#include "pingus_world_tour.h"
#include <string>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

AnimPenguinBomber::AnimPenguinBomber(PingusWorldTour* _game) : Animation(_game, olc::vf2d{32.0f, 32.0f}, 0.3f, "penguin_bomber"), game{static_cast<PingusWorldTour*>(_game)}{
    current_anim = {0,1,1,2,2,3,3,4,4,4,5,6,7,8,9,9,10,10,10,11};
    Play();
}

void
AnimPenguinBomber::UpdateStateLogic(){
    if((int)frame_count == current_anim.size()-1){Stop();}
}