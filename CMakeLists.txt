cmake_minimum_required(VERSION 3.6)
project(practice_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES start.cpp)
set(SOURCE_FILES help.cpp)
set(SOURCE_FILES first_function.cpp)
set(SOURCE_FILES func.cpp)
set(SOURCE_FILES sizeOfVariable.cpp)
set(SOURCE_FILES varibale_define.cpp)
set(SOURCE_FILES typedef.cpp)
add_executable(practice_cpp ${SOURCE_FILES})