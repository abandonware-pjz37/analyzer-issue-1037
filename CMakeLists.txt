cmake_minimum_required(VERSION 3.0)
project(analyze-bug)

add_library(util util.cpp)
add_executable(analyze-bug main.cpp)
target_link_libraries(analyze-bug util)
