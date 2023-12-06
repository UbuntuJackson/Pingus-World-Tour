#ifndef ITEM_MENU_H
#define ITEM_MENU_H
#include <map>
#include <vector>
#include "items.h"
class Game;

class ItemMenu{
public:
    Game* game;

    ItemMenu() = default;
    ItemMenu(Game* _game);

	int selected;
	std::map<int, int> items{
		{BOMBER, 10},
		{WALKER, 1},
		{PARACHUTER, 100}
	};
	std::vector<int> buttons = {BOMBER, WALKER, PARACHUTER};

	int GetSelectedItem(int _current_state);
	void Update();
	void Draw();
};

#endif