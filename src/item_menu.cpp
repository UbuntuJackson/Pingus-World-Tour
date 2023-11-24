#include "item_menu.h"
#include <ufo/game.h>
ItemMenu::ItemMenu(Game *_game) : game{_game}, selected{0}{}

int
ItemMenu::GetSelectedItem(int _current_state){
    if(_current_state == FALLER && selected != PARACHUTER && selected != BOMBER) return NO_ITEM;
    if(_current_state == BOMBER) return NO_ITEM;
    
    switch(selected){
        case BOMBER:
            items[selected] = items.at(selected)-=1;
            return BOMBER;
            break;
        case JUMPER:
            items[selected] = items.at(selected)-=1;
            return JUMPER;
            break;
        case PARACHUTER:
            items[selected] = items.at(selected)-=1;
            return PARACHUTER;
            break;
        case DRILLER:
            if(_current_state == WALKER){
                items[selected] = items.at(selected)-=1;
                return DRILLER;
            }
            break;
        case WALKER:
            items[selected] = items.at(selected)-=1;
            return WALKER;
            break;
    }
    return NO_ITEM;	
    
}

void
ItemMenu::Update(){
    if(game->GetMouseWheel() == 0){
        if(game->GetMouseWheel() >= 0) selected++;
        if(game->GetMouseWheel() <= 0) selected--;
    }
    if(selected > buttons.size()-1) selected = 0;
    if(selected < 0) selected = buttons.size()-1;
}

void
ItemMenu::Draw(){
    
	std::cout << "selected: " << selected << std::endl;
	
}