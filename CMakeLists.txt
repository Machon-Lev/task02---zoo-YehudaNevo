cmake_minimum_required(VERSION 3.2)
project(hw_zoo)

set(CMAKE_CXX_STANDARD 17)

add_executable(hw_zoo main.cpp Animal.h Animal.cpp Lion.h Lion.cpp Monkey.h Monkey.cpp Goose.h Goose.cpp Zoo.h Zoo.cpp)
