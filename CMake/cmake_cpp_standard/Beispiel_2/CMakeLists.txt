cmake_minimum_required(VERSION 3.7)

project(main_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

message("main_project Standard before add_sub: ${CMAKE_CXX_STANDARD}")

add_subdirectory(libs/math)

message("main_project Standard after add_sub: ${CMAKE_CXX_STANDARD}")

add_executable(hello_math src/main.cpp)
target_link_libraries(hello_math PRIVATE mathe)
target_include_directories(hello_math PRIVATE libs/math)
