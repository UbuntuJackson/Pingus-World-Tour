#include "items.h"

std::string FromEnumToString(int _en){
    switch (_en)
    {
        case WALKER:
            return "WALKER";
            break;
        case FALLER:
            return "FALLER";
            break;
        case BOMBER:
            return "BOMBER";
            break;
        case BUILDER:
            return "BUILDER";
            break;
        case PARACHUTER:
            return "PARACHUTER";
            break;
        case NO_ITEM:
            return "NO ITEM";
            break;
        case JUMPER:
            return "JUMPER";
            break;
        case DRILLER:
            return "DRILLER";
            break;
    }
}