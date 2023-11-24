#ifndef ITEMS_H
#define ITEMS_H

#include <string>

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

std::string FromEnumToString(int _en);

#endif