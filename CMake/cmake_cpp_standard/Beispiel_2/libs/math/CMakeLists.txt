cmake_minimum_required(VERSION 3.7)

project(sub_project LANGUAGES CXX)

message("sub_project Standard before set: ${CMAKE_CXX_STANDARD}")

set(CMAKE_CXX_STANDARD 17)

message("sub_project Standard after set: ${CMAKE_CXX_STANDARD}")

add_library(mathe STATIC mathe.cpp) 
target_include_directories(mathe PUBLIC .)

