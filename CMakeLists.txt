cmake_minimum_required(VERSION 3.23)
project(C_Code C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C_Code
        Learn1/main.c Learn1/operatorsAndExpressions.c Learn1/selectStructure.c Learn1/Comprehensive_selection.c Learn1/circularComprehensiveCase.c Learn1/array.c Learn1/func.c game/test.c game/game.h game/game.c Minesweeper_game/test.c Minesweeper_game/game2.h Minesweeper_game/game2.c Learn1/example14/file1.c Learn1/example14/file2.c Learn1/Operator_test.c Learn1/pointer.c Learn1/structure.c Learn1/debug_test.c Learn1/pointerAdvanced.c Learn1/exercise/test.c Learn1/structuralMorphology.c)
