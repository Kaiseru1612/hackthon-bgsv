cmake_minimum_required(VERSION 3.23)
project(1_hackathon)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(1_hackathon
        FileHandler.cpp
        FileHandler.h
        main.cpp
        HandlerManagers.hpp)
