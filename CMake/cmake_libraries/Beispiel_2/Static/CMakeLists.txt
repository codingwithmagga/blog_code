cmake_minimum_required(VERSION 3.7...3.22)

project(boost_static LANGUAGES CXX)

set(Boost_USE_STATIC_LIBS ON)

find_package(
    Boost 1.50
    REQUIRED
    COMPONENTS filesystem
)

add_executable(boost_static ../main.cpp)
target_link_libraries(boost_static PRIVATE Boost::filesystem)

