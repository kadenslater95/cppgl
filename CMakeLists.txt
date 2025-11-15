cmake_minimum_required(VERSION 3.14)
project(cppgl)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# TODO: Add Google test

include_directories(include)

#add_subdirectory(src)
#add_subdirectory(test)
add_subdirectory(examples)