cmake_minimum_required(VERSION 3.23)
project(C_Code C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C_Code
        main.c operatorsAndExpressions.c selectStructure.c Comprehensive_selection.c circularComprehensiveCase.c array.c)
