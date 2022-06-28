cmake_minimum_required(VERSION 3.12...3.22)

project(object_libs LANGUAGES CXX)

add_library(
  mathe_object
  OBJECT   
    src/mathe/rechteck.cpp
    src/mathe/quadrat.cpp
) 

target_include_directories(mathe_object PUBLIC src/mathe/)

add_executable(
  main_object_ge 
  src/main.cpp
  $<TARGET_OBJECTS:mathe_object> 
)
target_include_directories(main_object_ge PRIVATE src/mathe/)

add_executable(main_object_tll src/main.cpp)
target_link_libraries(main_object_tll PRIVATE mathe_object)

