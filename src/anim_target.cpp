#include "anim_target.h"
#include <ufo/animation.h>
#include "pingus_world_tour.h"
#include <string>
#include "../external/UFO-Cells/external/olcPixelGameEngine.h"

AnimTarget::AnimTarget(PingusWorldTour* _game) : Animation(_game, olc::vf2d{48.0f, 48.0f}, 0.5f, "target"), game{static_cast<PingusWorldTour*>(_game)}{
    current_anim = {0,1,2,3,4,5,6};
    Play();
}

void
AnimTarget::UpdateStateLogic(){
    if((int)frame_count == current_anim.size()-1){Stop();}
}