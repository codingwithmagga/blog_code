cmake_minimum_required(VERSION 3.7)

project(
   cpp_standard_project
   LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp17test main.cpp)
