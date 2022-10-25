//游戏相关函数的实现
// Created by xFanny on 2022/10/24.
//

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

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col) {
    int i = 0;
    for (i = 0; i < row; i++) {
        int j = 0;
        for (j = 0; j < col; j++) {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        if (i < row - 1) {
            int j = 0;
            for (j = 0; j < col; j++) {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col) {
    int x = 0;
    int y = 0;
    printf("玩家走：>\n");
    while (1) {
        printf("请输入下棋的坐标：");
        scanf("%d %d", &x, &y);
        //判断坐标合法性
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            //下棋，判断坐标是否被占用
            if (board[x - 1][y - 1] == ' ') {
                board[x - 1][y - 1] = '*';
                break;
            } else {
                printf("坐标被占用，请重新输入");
            }
        } else {
            printf("坐标非法，请重新输入\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col) {
    printf("电脑走：>\n");
    int x = rand() % row;
    int y = rand() % col;
    while (1) {
        if (board[x][y] == ' ') {
            board[x][y] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL], int row, int col) {
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (board[i][j] == ' ') {
                return 0;//棋盘未满
            }
        }
    }
    return 1;
}

char IsWin(char board[ROW][COL], int row, int col) {
    int i = 0;
    //判断3行
    for (i = 0; i < row; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
            return board[i][1];
        }
    }
    //判断3列
    for (i = 0; i < col; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
            return board[1][i];
        }
    }
    //判断对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ') {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
        return board[1][1];
    }
    //平局
    //如果棋盘满了返回1，不满返回0
    int ret = IsFull(board, row, col);
    if (ret == 1) {
        return 'Q';
    }
    //继续
    return 'C';
}