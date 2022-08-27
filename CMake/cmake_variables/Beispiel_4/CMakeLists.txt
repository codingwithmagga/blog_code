cmake_minimum_required(VERSION 3.7...3.22)

project(env_var_project LANGUAGES CXX)

message("HOME = $ENV{HOME}")
message("PATH = $ENV{PATH}")
message("TEMP = $ENV{TEMP}")
message("USER = $ENV{USER}")
message("LANG = $ENV{LANG}")

add_executable(hello_world src/main.cpp)
