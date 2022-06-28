cmake_minimum_required(VERSION 3.7...3.22)

project(normal_libs LANGUAGES CXX)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

set(LIB_SOURCES
  src/mathe/rechteck.cpp
  src/mathe/quadrat.cpp
  )

add_library(mathe_shared SHARED ${LIB_SOURCES}) 
add_library(mathe_static STATIC ${LIB_SOURCES}) 
add_library(mathe_module MODULE ${LIB_SOURCES}) 

target_include_directories(mathe_shared PUBLIC src/mathe/)
target_include_directories(mathe_static PUBLIC src/mathe/)
target_include_directories(mathe_module PUBLIC src/mathe/)

add_executable(main_shared src/main.cpp)
add_executable(main_static src/main.cpp)

target_link_libraries(main_shared PRIVATE mathe_shared)
target_link_libraries(main_static PRIVATE mathe_static)

