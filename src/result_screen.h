#ifndef RESULT_SCREEN
#define RESULT_SCREEN

#include <ufo/stack_based_state.h>

class ResultScreen : public StackBasedState{
public:
    int number_of_honey_coins;
    int min_rescuable;
    int max_rescuable;
    int rescued;
    int rank;
    CheckBox check_box_ok;
    CheckBox check_box_retry;
    ResultScreen();
    void Update();
    void Draw();
};

#endif