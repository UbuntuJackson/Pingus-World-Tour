#ifndef JSON_LOADING_TEST
#define JSON_LOADING_TEST
#include <ufo/json_interface.h>
#include <ufo/stack_based_state.h>
#include <string>
class StackBasedStateMachine;

class JsonLoadingTest : public StackBasedState{
public:
    JsonLoadingTest(StackBasedStateMachine* _state_machine);
    void LoadData(std::string _data);
};
#endif