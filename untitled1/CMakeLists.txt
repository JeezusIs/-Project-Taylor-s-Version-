cmake_minimum_required(VERSION 3.27)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        SpaceshipTypes.h
        functions.h
        functions.cpp
        Event.h
        Event.cpp)
