
cmake_minimum_required(VERSION 3.1)
project(C_EXTERN_TEST)

set(BINARY_NAME extern_test)

add_executable(${BINARY_NAME} main.cpp)

target_sources(${BINARY_NAME} PRIVATE 
	${CMAKE_CURRENT_SOURCE_DIR}/a.h
	${CMAKE_CURRENT_SOURCE_DIR}/a.cpp
)

