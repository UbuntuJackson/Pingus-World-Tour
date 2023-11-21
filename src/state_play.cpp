#include "state_play.h"
#include "pingus_world_tour.h"

StatePlay::StatePlay(PingusWorldTour *_game) : game{_game}{}

void
StatePlay::Set(){
    //game->camera.SetStateMouseAndArrowKeys({0.0f,0.0f},game->map.map_size);
    //std::cout << game->camera.position.x << std::endl;

}

void
StatePlay::Update(){
    //std::cout << "updating" << std::endl;
    //game->DrawDecal(game->asset_manager.GetDecal());
    //std::cout << game->camera.ScreenToWorld(game->GetMousePos(), {0.0f,0.0f}) << std::endl;
    game->map.Update();
    
    game->map.Draw(&(game->camera));
}