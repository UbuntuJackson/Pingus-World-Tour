#include "item_menu.h"
#include <ufo/game.h>
#include <string>
#include "items.h"
#include <ufo/json_interface.h>
#include <vector>
#include <map>

ItemMenu::ItemMenu(Game *_game, ujson::JsonNode* _json) : game{_game}, selected{0}{
    for(auto element : _json->GetJsonNode("items").GetAs<std::vector<ujson::JsonNode>>()){
        int item_name = FromStringToEnum(element.GetJsonNode("item").GetAs<std::string>());
        int number_of_item = element.GetJsonNode("number").GetAs<int>();
        buttons.push_back(item_name);
        items.insert(std::pair<int, int>(item_name, number_of_item));
    }
}

int
ItemMenu::GetSelectedItem(int _current_state){
    int requested_item = buttons[selected];
    if(_current_state == requested_item) return NO_ITEM;
    if(_current_state == FALLER && requested_item != PARACHUTER && requested_item != BOMBER) return NO_ITEM;
    if(_current_state == BOMBER) return NO_ITEM;
    
    if(items.at(requested_item) == 0) return NO_ITEM;

    switch(buttons[selected]){
        case BOMBER:
            items[requested_item] = items.at(requested_item)-=1;
            return BOMBER;
            break;
        case JUMPER:
            items[requested_item] = items.at(requested_item)-=1;
            return JUMPER;
            break;
        case PARACHUTER:
            items[requested_item] = items.at(requested_item)-=1;
            return PARACHUTER;
            break;
        case DRILLER:
            if(_current_state == WALKER){
                items[requested_item] = items.at(requested_item)-=1;
                return DRILLER;
            }
            break;
        case WALKER:
            items[requested_item] = items.at(requested_item)-=1;
            return WALKER;
            break;
    }
    return NO_ITEM;	
    
}

void
ItemMenu::Update(){
    if(!game->GetKey(olc::SHIFT).bHeld){
        if(game->GetMouseWheel() >= 1){
            selected--;
            if(selected < 0) selected = buttons.size()-1;
        }
        if(game->GetMouseWheel() <= -1){
            selected++;
            if(selected > buttons.size()-1) selected = 0;
        }
    }
}

void
ItemMenu::Draw(){
    int position_increment = 0;
    for(auto b : buttons){
	    if(b == buttons[selected]){
            game->DrawStringDecal({20.0f,20.0f + position_increment*20.0f}, FromEnumToString(b) + ": " + std::to_string(items[b]), olc::DARK_RED, {2,2});
        }
        else{
            game->DrawStringDecal({20.0f,20.0f + position_increment*20.0f}, FromEnumToString(b) + ": " + std::to_string(items[b]), olc::Pixel(128, 0, 0, 100), {2,2});
        }
        position_increment++;
    }
	
}