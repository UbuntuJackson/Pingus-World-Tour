#include <ufo/json_interface.h>
#include <ufo/stack_based_state.h>
#include "json_loading_test.h"
#include <ufo/file_utils.h>
#include <iostream>

JsonLoadingTest::JsonLoadingTest(StackBasedStateMachine* _state_machine) : StackBasedState(_state_machine){
    LoadData("../save_data/save.json");
}

void
JsonLoadingTest::LoadData(std::string _path){
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

    ujson::JsonNode main_obj;
    main_obj.AddNodeToObject("number" , new ujson::JsonNodeNumber(3));
    ujson::JsonNodeArray *arr = new ujson::JsonNodeArray();
    arr->AddNodeToArray(new ujson::JsonNodeString("aaaaaaa"));
    arr->AddNodeToArray(new ujson::JsonNodeString("bbbbbb"));
    arr->AddNodeToArray(new ujson::JsonNodeString("ccccc"));
    main_obj.AddNodeToObject("an_array", arr);
    std::string f_text = main_obj.GetFileAsString();
    WriteFileFromString(f_text, "../save_data/test_writing.json");
    main_obj.JsonNodeDelete();
}