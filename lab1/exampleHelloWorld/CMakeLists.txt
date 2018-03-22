cmake_minimum_required(VERSION 3.9)
project(square_v)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS main.cpp HelloFunctions.h HelloFunctions.cpp test.cpp)
add_executable(square_v ${CMAKE_CXX_SOURCE_FILE_EXTENSIONS})
#add_executable(square_v ${CMAKE_CXX_SOURCE_FILE_EXTENSIONS})
target_link_libraries(square_v gtest gtest_main)
