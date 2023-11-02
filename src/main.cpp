#include <program/ufo_global.h>
#include "pingus_world_tour.h"
//#include "../../external/olcPGEX_SplashScreen.h"
//#define OLC_PGEX_SPLASHSCREEN

int main()
{
	PingusWorldTour game;
	UfoGlobal::squirrel_interface.game = &game;
	if (game.Construct(1600, 800, 1, 1, false, true, true))
		game.Start();

	return 0;
}