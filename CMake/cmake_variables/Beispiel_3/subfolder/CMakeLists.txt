cmake_minimum_required(VERSION 3.8...3.22)

project(sub_project LANGUAGES CXX)

set(SUB_VAR 4)
set(PARENT_VAR 6 PARENT_SCOPE)

message("Minimale CMake Version Unterordner: ${CMAKE_MINIMUM_REQUIRED_VERSION}")
message("In Unterordner: MAIN_VAR=${MAIN_VAR}")
message("In Unterordner: SUB_VAR=${SUB_VAR}")
message("In Unterordner: PARENT_VAR=${PARENT_VAR}\n")
