
cmake_minimum_required(VERSION 3.1)
project(EXTERN_ERROR_TEST)

set(BINARY_NAME extern_error_test)

set(Source_files 
	${CMAKE_CURRENT_SOURCE_DIR}/main.c
	${CMAKE_CURRENT_SOURCE_DIR}/a.h
	${CMAKE_CURRENT_SOURCE_DIR}/a.c
	${CMAKE_CURRENT_SOURCE_DIR}/b.c

	)



source_group(f FILES ${Source_files})
add_executable(${BINARY_NAME} ${Source_files})


if(WIN32)
 # no utf-8 warning in Visual Studio https://github.com/fooofei/cpp_notes/blob/master/visual_sutdio_warning_C4819_utf-8.md
 target_compile_options(${BINARY_NAME} PRIVATE /source-charset:utf-8 /execution-charset:utf-8)
endif()

if(NOT WIN32)
# if use this, link will report error
#duplicate symbol _g_a in:
#    CMakeFiles/extern_error_test.dir/main.c.o
#    CMakeFiles/extern_error_test.dir/b.c.o
#ld: 4 duplicate symbols for architecture x86_64
#clang: error: linker command failed with exit code 1 (use -v to see invocation)
target_compile_options(${BINARY_NAME} PRIVATE -fno-common)
endif()
