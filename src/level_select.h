#ifndef LEVEL_SELECT_H
#define LEVEL_SELECT_H
#include <ufo/stack_based_state.h>
class StackBasedStateMachine;
#include <vector>
#include <string>
class LevelSelect : public StackBasedState{ //A LevelSelect instance needs to be created as the game loads. Some quick parsing should do the job
public:
    struct LevelData{
        std::string LevelName;
        int min_rescuable;
        int max_rescuable;
        int most_rescued;
        int honey_coins;
        int rank;
    };
    const std::string title = "Level Select";
    std::vector<LevelData> levels_entries;
    LevelSelect(StackBasedStateMachine* _state_machine);
    void CreateLevelData(LevelData _data);
    void LoadLevelData(std::string _path);
    void Update();
    void Draw();

};

#endif