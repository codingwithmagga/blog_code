cmake_minimum_required(VERSION 3.15...3.22)

project(list_project LANGUAGES CXX)

set(FIBONACCI 0 1 1 2 3 5 8 13 21)
set(PRIM "2;3;5;7;11;13")

list(LENGTH FIBONACCI FIBONACCI_LENGTH)
message("FIBONACCI_LENGTH = ${FIBONACCI_LENGTH}")

list(APPEND PRIM 17 19)
message("PRIM = ${PRIM}")

list(POP_BACK FIBONACCI)
message("FIBONACCI = ${FIBONACCI}")

list(REVERSE PRIM)
message("PRIM = ${PRIM}")

add_executable(hello_world main.cpp)
