//
// Created by xFanny on 2022/10/24.
//三子棋
#include <stdio.h>
#include "game.h"

void menu() {
    printf("**********************\n");
    printf("****** 1. play  ******\n");
    printf("****** 0. exit  ******\n");
    printf("**********************\n");
}

void game() {
    //存储数据-二维数组
    char board[ROW][COL];//在头文件定义行列
    //初始化棋盘 -- 初始化为空格
    InitBoard(board, ROW, COL);
}

int main() {
    int input = 0;
    do {
        menu();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                printf("三子游戏\n");
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，请重新选择\n");
                break;
        }
    } while (input);
    return 0;
}