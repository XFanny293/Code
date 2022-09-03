cmake_minimum_required(VERSION 3.23)
project(C_Code C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C_Code
        main.c classify0204.c)
