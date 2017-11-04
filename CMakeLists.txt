cmake_minimum_required(VERSION 3.8)
project(CProgrammingCurriculum)

set(CMAKE_C_STANDARD 99)
file(GLOB src_files *.c)
set(SOURCE_FILES ${src_files})
add_executable(main ${SOURCE_FILES})
target_link_libraries(main m)