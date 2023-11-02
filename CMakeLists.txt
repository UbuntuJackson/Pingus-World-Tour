cmake_minimum_required(VERSION 3.10)

project(PingusWorldTour)
add_subdirectory(external/UFO-Cells) #CMakeLists.txt for engine is in folder called "engine"

file(
    GLOB SRC
    src/*.cpp
)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} PUBLIC UFOCells)