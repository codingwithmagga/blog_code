cmake_minimum_required(VERSION 3.7...3.22)

project(include_lib LANGUAGES CXX)

add_library(rechteck_bib STATIC src/rechteck/rechteck.cpp) 
add_library(quadrat_bib STATIC src/quadrat/quadrat.cpp) 

target_include_directories(rechteck_bib PUBLIC src/rechteck/)
target_include_directories(quadrat_bib PUBLIC src/quadrat/)

add_library(mathe INTERFACE) 
target_link_libraries(
  mathe 
  INTERFACE 
    rechteck_bib
    quadrat_bib
)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE mathe)
