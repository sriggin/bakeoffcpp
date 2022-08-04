cmake_minimum_required(VERSION 3.15)
project(bakeoffcpp CXX)

add_executable(bakeoffcpp src/bakeoffcpp.cpp src/main.cpp)
target_include_directories(bakeoffcpp PUBLIC include)

install(TARGETS bakeoffcpp)
