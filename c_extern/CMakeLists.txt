
cmake_minimum_required(VERSION 3.1)
project(C_EXTERN_TEST)

set(BINARY_NAME extern_test)

set(Source_files 
	${CMAKE_CURRENT_SOURCE_DIR}/a.h
	${CMAKE_CURRENT_SOURCE_DIR}/a.c
	${CMAKE_CURRENT_SOURCE_DIR}/main.c
)

add_executable(${BINARY_NAME} ${Source_files})

source_group(files FILES ${Source_files})