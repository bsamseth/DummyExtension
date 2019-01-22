cmake_minimum_required(VERSION 3.1.3)

project(TestProject VERSION 0.0.0.1 LANGUAGES CXX)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")


add_custom_target( git_update
    COMMAND git submodule init
    COMMAND git submodule update
    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR} )

# Compile Python bindings.
add_subdirectory(pybind11)
pybind11_add_module(_mypackage pymain.cpp)

add_dependencies(_mypackage git_update)

