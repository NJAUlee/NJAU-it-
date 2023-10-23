cmake_minimum_required(VERSION 3.23)
project(untitled5 C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled5 main.c calculate.h addition.cpp subtraction.cpp multiplication.cpp division.cpp checkInput.h checkInput.cpp start.h)

#add_executable(calculator main.c calculate.h addition.cpp subtraction.cpp multiplication.cpp division.cpp checkInput.h checkInput.cpp)

