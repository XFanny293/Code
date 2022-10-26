//
// Created by xfanny on 2022/10/26.
//
#include "game.h"

void menu() {
    printf("********************************\n");
    printf("**********  1. play   **********\n");
    printf("**********  0. exit   **********\n");
    printf("********************************\n");
}

void game() {

}

int main() {
    int input = 0;
    do {
        menu();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input) {
            case 1:
                printf("扫雷游戏开始\n");
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，请重新选择");
                break;
        }
    } while (input);
    return 0;
}
