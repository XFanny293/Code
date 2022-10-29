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
    printf("-----扫雷游戏---------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col) {
    //布置10个雷
    int count = EASY_COUNT;
    while (count) {
        //生成随机的下标
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (mine[x][y] == '0') {
            mine[x][y] = '1';
            count--;
        }
    }
}

//排查周围雷
/*
 * static
 * 1.修饰局部变量
 * 2.修饰全局变量
 * 3.修饰函数
*/
static int get_mine_count(char mine[ROWS][COLS], int x, int y) {
    return mine[x - 1][y] +
           mine[x - 1][y - 1] +
           mine[x][y - 1] +
           mine[x + 1][y - 1] +
           mine[x + 1][y] +
           mine[x + 1][y + 1] +
           mine[x][y + 1] +
           mine[x - 1][y + 1] - 8 * '0';
    //第二种方法循环
    /* for (int i = 0; i <= 1; i++) {
         for (int j = 1; j <= 1; j++) {
             mine[x + i][y + j];
         }
     }*/
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
    //1. 输入排查的坐标
    //2. 检查坐标处是不是雷
    // (1) 是雷 - 很遗憾被炸死了
    // (2) 不是雷 - 统计坐标周围有几个雷 - 存储排查雷的信息到show数组，游戏继续
    int x = 0;
    int y = 0;
    int win = 0;
    while (win < row * col - EASY_COUNT) {
        printf("请输入要排查的坐标:>");
        scanf("%d%d", &x, &y);
        // 判断坐标的合法性
        if (x >= 1 && x <= row && y >= 1 && y <= col) {
            if (mine[x][y] == '1') {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, row, col);
                break;
            } else {
                //不是雷的情况，统计x，y坐标周围有几个雷
                int count = get_mine_count(mine, x, y);
                show[x][y] = count + '0';
                //显示排查出的信息
                DisplayBoard(show, row, col);
                win++;
            }
        } else {
            printf("坐标输入不合法，请重新输入！");
        }
    }
    if (win == row * col - EASY_COUNT) {
        printf("恭喜你,排雷成功！\n");
        DisplayBoard(mine, row, col);
    }
}