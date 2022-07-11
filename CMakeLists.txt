cmake_minimum_required(VERSION 3.0.0)
project(Core VERSION 0.1.0)

include(FetchContent)
FetchContent_Declare(
    glm
    GIT_REPOSITORY https://github.com/g-truc/glm.git
)
FetchContent_MakeAvailable(glm)

add_library(Core glad.c Core.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC glm)
target_include_directories(${PROJECT_NAME} PUBLIC include/)