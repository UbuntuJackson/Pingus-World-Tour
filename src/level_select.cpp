#include "level_select.h"
#include <string>
#include <ufo/json_interface.h>
#include "ufo/file_utils.h"
#include <iostream>

LevelSelect::LevelSelect(StackBasedStateMachine* _state_machine) : StackBasedState(_state_machine){
    LoadLevelData("../save_data/save.json");
}

void
LevelSelect::CreateLevelData(LevelData _data){

}

void
LevelSelect::LoadLevelData(std::string _path){
    std::string text = ReadFileToString(_path);
    ujson::JsonNode n = ujson::JsonNode(text);
    ujson::JsonNode n1 = n.GetJsonNode("name");
    for(ujson::JsonNode j : n1.GetAs<std::vector<ujson::JsonNode>>()){
        auto i = j.GetAs<int>();
        std::cout << i << std::endl;
    }
    ujson::JsonNode another_object = n.GetJsonNode("another_object");
    ujson::JsonNode json_arr = another_object.GetJsonNode("basically_some_strings");
    for(ujson::JsonNode j : json_arr.GetAs<std::vector<ujson::JsonNode>>()){
        auto i = j.GetAs<std::string>();
        std::cout << i << std::endl;
    }
    n.JsonNodeDelete();
}

void
LevelSelect::Update(){}

void
LevelSelect::Draw(){}