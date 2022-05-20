cmake_minimum_required(VERSION 3.7)

project(
   cpp_standard_project
   LANGUAGES CXX
)

add_executable(hello_world main.cpp)

add_executable(cpp17test main17.cpp)
set_target_properties(cpp17test
    PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
)
