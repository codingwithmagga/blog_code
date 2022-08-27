cmake_minimum_required(VERSION 3.7...3.22)

project(main_project LANGUAGES CXX)

set(MAIN_VAR 2)

message("Minimale CMake Version Hauptordner: ${CMAKE_MINIMUM_REQUIRED_VERSION}")
message("Vor add_subdirectory: MAIN_VAR=${MAIN_VAR}")
message("Vor add_subdirectory: SUB_VAR=${SUB_VAR}")
message("Vor add_subdirectory: PARENT_VAR=${PARENT_VAR}\n")

add_subdirectory(subfolder)

message("Minimale CMake Version Hauptordner: ${CMAKE_MINIMUM_REQUIRED_VERSION}")
message("Nach add_subdirectory: MAIN_VAR=${MAIN_VAR}")
message("Nach add_subdirectory: SUB_VAR=${SUB_VAR}")
message("Nach add_subdirectory: PARENT_VAR=${PARENT_VAR}")

add_executable(hello_world src/main.cpp)
