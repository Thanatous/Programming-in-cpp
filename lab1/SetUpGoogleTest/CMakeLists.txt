cmake_minimum_required(VERSION 3.9)
project(lab1_square_volume)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(tests)

set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS main.cpp Functions.h Functions.cpp)
add_executable(lab1_square_volume ${CMAKE_CXX_SOURCE_FILE_EXTENSIONS} Functions.h Functions.cpp)
enable_testing()
