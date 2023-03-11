cmake_minimum_required(VERSION 3.8...3.26)

project(compiler_flag_3 LANGUAGES CXX)
    
add_executable(warning_test main.cpp)

if(MSVC) 
  target_compile_options(
    warning_test
    PRIVATE "/W4"
    )
else()
  target_compile_options(
    warning_test
    PRIVATE "-Wall"
    )
endif()
