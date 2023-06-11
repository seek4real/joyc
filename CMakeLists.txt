# compiler project `joyc` CMakeList.txt

cmake_minimum_required(VERSION 2.8)

# project name
# 设置工程名称
# project(joyc)
# LANGUAGES CXX 指定为c++工程 (不是必须)
PROJECT(joyc 
DESCRIPTION "Very nice project"
LANGUAGES CXX
)


# version
SET(index_version 0.1)

# 设定 c++ 属性
SET(CMAKE_CXX_STANDARD 11)


# 设定 编译模式
# SET(CMAKE_BUILD_TYPE "Release")
SET(CMAKE_BUILD_TYPE "Debug")

# build folder
message(STATUS ${CMAKE_BINARY_DIR})

#SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
#SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

message(STATUS ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

# search all src files
# 将当前目录下的所有源文件 并赋值给 DIR_SOURCE
aux_source_directory(. DIR_SOURCE)  


# 搜索头文件
# GLOB_RECURSE 递归搜索
# GLOB 搜索当前文件夹
# FILE(GLOB_RECURSE DIR_HEADER ./*.h ./*.hpp)
FILE(GLOB DIR_HEADER ./*.h ./*.hpp)
source_group("Include Files" FILES ${DIR_HEADER})

# include sub directory
add_subdirectory(logic)
add_subdirectory(core)

# set include directory
# 设定头文件目录 编译器将从这些目录里面搜索
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/core)
include_directories(${PROJECT_SOURCE_DIR}/logic)

#include_directories(./ ./core ./logic)


# distribution
add_executable(${PROJECT_NAME} ${DIR_HEADER} ${DIR_SOURCE})
#add_executable(joyc ${DIR_SOURCE})


# 添加连接库
target_link_libraries(${PROJECT_NAME} PUBLIC core logic)
#target_link_libraries(joyc PUBLIC core logic)

message(STATUS "PROJECT_NAME=${PROJECT_NAME}")
message(STATUS "PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")