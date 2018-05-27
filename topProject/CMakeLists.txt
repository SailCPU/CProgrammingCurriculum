file(GLOB src_files *.c *.h)
set(SOURCE_FILES ${src_files})
add_executable(main ${SOURCE_FILES})
target_link_libraries(main m)