# compiler project src folder

aux_source_directory(. Dir_lib_src)



# build library
add_library(lib_main ${Dir_lib_src})

