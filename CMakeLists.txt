include_directories(include)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/src SRC_LIST)
add_executable(relect main.cpp ${SRC_LIST})
