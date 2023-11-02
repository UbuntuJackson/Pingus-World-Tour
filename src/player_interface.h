#ifndef PLAYER_INTERFACE_H
#define PLAYER_INTERFACE_H

#include <ufo/rect.h>
#include <vector>
#include <string>

enum Item{
    DRILL,
    EXPLODE,
    BASH,
    BLOCK,
    FLOAT,
    JUMP
}

class PlayerInterface{
public:
    struct Button{
        Rect rect;
        std::string sprite;
        int item;
    }
    std::vector<Button> buttons;
    PlayerInterface();

};
#endif