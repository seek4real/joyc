# compiler project `index` CMakeList.txt

cmake_minimum_required(VERSION 2.8)

# project name
project(index)

# version
set(index_version 0.1)


# build folder
#message(STATUS ${CMAKE_BINARY_DIR})

SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#message(${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

# search all src files
# 将当前目录下的所有源文件
aux_source_directory(. Dir_src)  

# include sub directory
add_subdirectory(src)

# distribution
add_executable(indexc main.c)


# 添加连接库
target_link_libraries(indexc lib_main)

