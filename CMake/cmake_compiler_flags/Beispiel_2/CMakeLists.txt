cmake_minimum_required(VERSION 3.8...3.26)

project(compiler_flag_2 LANGUAGES CXX)
    
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp17_exe main.cpp)

target_compile_features(
  cpp17_exe 
  PRIVATE cxx_std_17
)
