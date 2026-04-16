cmake_minimum_required(VERSION 4.1)
project(Blursed)

set(CMAKE_CXX_STANDARD 26)

add_executable(Blursed main.cpp
        src/Process.cpp
        Include/Process.h
        src/Write.cpp
        Include/Write.h
        src/Read.cpp
        Include/Read.h
        Include/json.hpp
)
