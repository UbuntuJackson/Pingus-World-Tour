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
		{BOMBER, 5},
		{WALKER, 1}
	};
	std::vector<int> buttons = {BOMBER, WALKER};

	int GetSelectedItem(int _current_state);
	void Update();
	void Draw();
};

#endif