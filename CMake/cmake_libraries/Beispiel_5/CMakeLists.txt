cmake_minimum_required(VERSION 3.7...3.22)

project(imported_lib LANGUAGES CXX)

set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/libs/mathe/)

if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin")
  set(LIB_FILE libmathe_shared.dylib) 
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
  set(LIB_FILE mathe_shared.dll) 
else() # Assume Linux-System
  set(LIB_FILE libmathe_shared.so) 
endif()

add_library(CodingWithMagga::mathe SHARED IMPORTED)
set_property(
  TARGET CodingWithMagga::mathe
  PROPERTY
    IMPORTED_LOCATION ${LIB_PATH}/libmathe_shared.so
)
target_include_directories(
  CodingWithMagga::mathe 
  INTERFACE ${LIB_PATH}
)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE CodingWithMagga::mathe)
