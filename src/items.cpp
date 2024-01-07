#include "items.h"
#include <string>

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
        case EXITING:
            return "EXITING";
            break;
        case DYING:
            return "DYING";
            break;
    }
}

int FromStringToEnum(std::string _st){
    if(_st == "WALKER") return WALKER;
    if(_st == "FALLER") return FALLER;
    if(_st == "BOMBER") return BOMBER;
    if(_st == "BUILDER") return BUILDER;
    if(_st == "PARACHUTER") return PARACHUTER;
    if(_st == "NO ITEM") return NO_ITEM;
    if(_st == "DRILLER") return DRILLER;
    if(_st == "EXITING") return EXITING;
    if(_st == "DYING") return DYING;
}