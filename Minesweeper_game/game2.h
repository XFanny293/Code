//扫雷游戏
// Created by xfanny on 2022/10/26.
//
#ifndef C_CODE_GAME_H
#define C_CODE_GAME_H
#endif //C_CODE_GAME_H
//包含头文件
#include <stdio.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//声明函数，初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);