//
// Created by xfanny on 2022/10/26.
//
#include "game2.h"

//实现函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            board[i][j] = set;
        }
    }
}

//打印棋盘函数实现
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
    int i = 0;
    int j = 0;
    printf("-----扫雷游戏---------\n");

    //打印列号
    for (i = 0; i <= col; i++) {
        printf("%d ", i);
    }
    printf("\n");
    for (i = 1; i <= row; i++) {
        //打印行号
        printf("%d ", i);
        for (j = 1; j <= col; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("-----扫雷游戏---------");
}