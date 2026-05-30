cmake_minimum_required(VERSION 3.28)
project(app CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_executable(app main.cpp)
target_link_libraries(app hello)

