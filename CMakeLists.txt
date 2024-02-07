cmake_minimum_required(VERSION 3.26)
project(TextVenture)

set(CMAKE_CXX_STANDARD 17)

add_executable(TextVenture main.cpp
        Message.cpp
        Message.h
        Game.cpp
        Game.h)
