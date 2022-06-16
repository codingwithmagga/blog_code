cmake_minimum_required(VERSION 3.7...3.22)

project(static_shared_lib LANGUAGES CXX)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

add_library(mathe_shared SHARED src/mathe.cpp) 
add_library(mathe_static STATIC src/mathe.cpp) 

add_executable(main_shared src/main.cpp)
add_executable(main_static src/main.cpp)

target_link_libraries(main_shared PRIVATE mathe_shared)
target_link_libraries(main_static PRIVATE mathe_static)

