#include "item_menu.h"
#include <ufo/game.h>
#include <string>
#include "items.h"
ItemMenu::ItemMenu(Game *_game) : game{_game}, selected{0}{}

int
ItemMenu::GetSelectedItem(int _current_state){
    if(_current_state == FALLER && selected != PARACHUTER && selected != BOMBER) return NO_ITEM;
    if(_current_state == BOMBER) return NO_ITEM;
    
    int requested_item = buttons[selected];
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
            selected++;
            if(selected > buttons.size()-1) selected = 0;
        }
        if(game->GetMouseWheel() <= -1){
            selected--;
            if(selected < 0) selected = buttons.size()-1;
        }
    }
}

void
ItemMenu::Draw(){
    int position_increment = 0;
    for(auto [k, v] : items){
        position_increment++;
	    if(k == buttons[selected]){
            game->DrawStringDecal({20.0f,20.0f + position_increment*40.0f}, FromEnumToString(k) + ": " + std::to_string(v), olc::RED, {5,5});
        }
        else{
            game->DrawStringDecal({20.0f,20.0f + position_increment*40.0f}, FromEnumToString(k) + ": " + std::to_string(v), olc::Pixel(255, 0, 0, 100), {5,5});
        }
    }
	
}