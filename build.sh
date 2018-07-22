#!/bin/sh

#build.sh
# build.sh is a generator in UNIX-like system, use cmake.

# Usage:
# Only `sh build.sh` in your shell(generally is bash,csh)


# change work directory
root=$(cd `dirname $0`; pwd)
echo "project root path is " $root

# :<<BLOCK
# if [ ! -d ./build ]
# then
#    echo "./build is not a directory. Delete them if you nessasearry."
#    exit 1
# fi
# BLOCK

# remove old build directory
if [[ -e ./build && -d ./build ]]
then
    rm -rf ./build/
fi

# (re)generate build directory
mkdir -p ./build/

cd ${root}/build
echo "current work path is " $(pwd)


echo "build start======="
result_cmake=$(cmake ../)   # create CMakeFiles and others cmake's cache files in here.

echo "cmake result:\n" $result_cmake "\n"

result_make=$(make)  # generate executable files in {root}/build/bin/

echo "make result:\n" $result_make "\n"

echo "\nAll Finish\n"

