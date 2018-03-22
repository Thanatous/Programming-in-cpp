cmake_minimum_required(VERSION 3.9)
project(basic_tests)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

enable_testing()
set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS test.cpp Variables.h main_1.cpp)
add_executable(basic_tests ${CMAKE_CXX_SOURCE_FILE_EXTENSIONS} test.cpp Variables.h main_1.cpp)
target_link_libraries(basic_tests gtest gtest_main)
