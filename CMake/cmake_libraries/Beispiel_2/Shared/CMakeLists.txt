cmake_minimum_required(VERSION 3.7...3.22)

project(boost_shared LANGUAGES CXX)

find_package(
    Boost 1.50
    REQUIRED
    COMPONENTS filesystem
)

add_executable(boost_shared ../main.cpp)
target_link_libraries(boost_shared PRIVATE Boost::filesystem)

