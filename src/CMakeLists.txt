# compiler project src folder

# add all files in current path
aux_source_directory(. Dir_lib_src)

# TODO set build path


# build library
add_library(joy ${Dir_lib_src})

