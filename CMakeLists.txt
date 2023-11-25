cmake_minimum_required(VERSION 3.23)
project(scientific_calculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(scientific_calculator main.cpp Calculator.cpp Calculator.h Shunting_Yard.cpp Shunting_Yard.h Stack.cpp Stack.h)
