#ifndef ITEM_MENU_H
#define ITEM_MENU_H
#include <map>
#include <vector>
#include "items.h"
#include <ufo/json_interface.h>

class Game;

class ItemMenu{
public:
    Game* game;

    ItemMenu() = default;
    ItemMenu(Game* _game, ujson::JsonNode* _json);

	int selected;
	std::map<int, int> items;
	std::vector<int> buttons;

	int GetSelectedItem(int _current_state);
	void Update();
	void Draw();
};

#endif