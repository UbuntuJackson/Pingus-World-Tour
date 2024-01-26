cmake_minimum_required(VERSION 3.10)

project(PingusWorldTour)
add_subdirectory(external/UFO-Cells) #CMakeLists.txt for engine is in folder called "engine"

set(
    SRC
    src/anim_penguin_bomber.cpp
    src/anim_penguin_walk.cpp
    src/anim_target.cpp
    src/anim_penguin_driller.cpp
    src/anim_honey_coin.cpp
    src/honey_coin.cpp
    src/item_menu.cpp
    src/items.cpp
    src/main.cpp
    src/penguin.cpp
    src/pingus_camera.cpp
    src/pingus_world_tour.cpp
    src/pingus_level.cpp
    src/spawner.cpp
    src/level_select.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} PUBLIC UFOCells)