cmake_minimum_required(VERSION 3.28)
project(hello CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_library(hello)

target_sources(hello
	PUBLIC
		FILE_SET CXX_MODULES FILES
			hello.ixx
	PRIVATE
		hello.cxx
)

