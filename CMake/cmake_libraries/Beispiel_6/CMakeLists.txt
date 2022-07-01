cmake_minimum_required(VERSION 3.7...3.22)

project(alias_lib LANGUAGES CXX)

add_library(
  mathe 
  STATIC   
    src/mathe/rechteck.cpp
    src/mathe/quadrat.cpp
) 
target_include_directories(mathe PUBLIC src/mathe/)

add_library(CodingWithMagga::mathe ALIAS mathe)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE CodingWithMagga::mathe)
