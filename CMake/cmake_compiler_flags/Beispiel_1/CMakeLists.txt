cmake_minimum_required(VERSION 3.8...3.26)

project(compiler_flag_1 LANGUAGES CXX)

add_executable(def_test main.cpp)

target_compile_definitions(
  def_test
  PRIVATE PRINT NUMBER=1
)
