cmake_minimum_required(VERSION 3.26)
project(HashMapProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HashMapProject
        HashMap.cpp
        HashMap.hpp
        HashNode.cpp
        HashNode.hpp
        mainHash.cpp
        MakeModel.cpp
        MakeModel.hpp)
