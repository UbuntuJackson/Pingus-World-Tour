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
}

void
LevelSelect::Update(){}

void
LevelSelect::Draw(){}