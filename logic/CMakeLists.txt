# compiler project src folder

# add all files in current path
# 指定source 源文件目录
aux_source_directory(. DIR_SRC)
message(STATUS "DIR_SRC=>${DIR_SRC}")

# TODO set build path

# search all src files
# 将当前目录下的所有源文件
# aux_source_directory(. DIR_SRC)  

# 指定头文件目录
#include_directories(${PROJECT_SOURCE_DIR})

file(GLOB DIR_HEADER ./*.h ./*.hpp)
source_group("Include Files" FILES ${DIR_HEADER})

# build library
# add_library(libname [STATIC | SHARED] libfile)
add_library(logic STATIC ${DIR_HEADER} ${DIR_SRC})

