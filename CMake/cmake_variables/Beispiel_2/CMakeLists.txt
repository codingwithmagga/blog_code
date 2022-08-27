function(var_test)
    set(FUNC_VAR 1)
    set(PARENT_VAR 2 PARENT_SCOPE)
    
    message("In Funktion FUNC_VAR: ${FUNC_VAR}")
    message("In Funktion PARENT_VAR: ${PARENT_VAR}\n")
endfunction()

cmake_minimum_required(VERSION 3.7)

project(cmake_function_var LANGUAGES CXX)

message("Vor Funktion FUNC_VAR: ${FUNC_VAR}")
message("Vor Funktion PARENT_VAR: ${PARENT_VAR}\n")

var_test()

message("Nach Funktion FUNC_VAR: ${FUNC_VAR}")
message("Nach Funktion PARENT_VAR: ${PARENT_VAR}\n")

add_executable(hello_world main.cpp)
