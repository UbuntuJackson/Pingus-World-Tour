#include "pingus_world_tour.h"
//#include "../../external/olcPGEX_SplashScreen.h"
//#define OLC_PGEX_SPLASHSCREEN

int main()
{
	PingusWorldTour game;
	if (game.Construct(1920, 1000, 1, 1, false, true, true))
		game.Start();

	return 0;
}