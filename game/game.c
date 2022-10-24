//
// Created by xfanny on 2022/10/24.
//
#include <stdio.h>
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            board[i][j] = ' ';
        }
    }
}