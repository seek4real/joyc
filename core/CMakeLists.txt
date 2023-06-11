# compiler project src folder

# add all files in current path
aux_source_directory(. DIR_SRC)


# add header in VisualStudio solution 
file(GLOB DIR_HEADER ./*.h ./*.hpp)
source_group("Include Files" FILES ${DIR_HEADER})

# TODO set build path


# build library
# add_library(libname [STATIC | SHARED] libfile)
add_library(core STATIC ${DIR_HEADER} ${DIR_SRC})

