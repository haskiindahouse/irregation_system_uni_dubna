cmake_minimum_required(VERSION 3.23)
project(maks_udin)

set(CMAKE_CXX_STANDARD 23)

file(GLOB SOURCES
        helpers/*.cpp
        items/users/*.cpp
        conditions/*.cpp
        actions/*.cpp
        items/places/*.cpp
        items/payment/*.cpp
        main.cpp)
add_executable(maks_udin ${SOURCES} items/Item.h helpers/SerializeHelper.h)
