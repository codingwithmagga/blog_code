cmake_minimum_required(VERSION 3.8)

project(
   cpp_standard_project
   LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

message("Unterstützte Compiler-Features = ${CMAKE_CXX_COMPILE_FEATURES}")

add_executable(hello_world main.cpp)

add_executable(cpp17test main17.cpp)
target_compile_features(cpp17test PRIVATE cxx_std_17)
