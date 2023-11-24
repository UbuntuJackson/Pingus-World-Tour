#ifndef ITEM_MENU_H
#define ITEM_MENU_H
#include <map>
#include <vector>
class Game;

class ItemMenu{
    Game* game;

    ItemMenu() = default;
    ItemMenu(Game* _game);

    enum ItemStates{
        WALKER,
        FALLER,
        BOMBER,
        BUILDER,
        PARACHUTER,
        NO_ITEM,
        JUMPER,
		DRILLER
    };

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