//
// Created on 2022/10/9.
//
#include <stdio.h>
#include <string.h>
/*
int main() {
    int i, a[10]; //定义整型数组a，a包含10个元素
    for (i = 0; i <= 9; i++) //先后对10个数组元素赋值
        a[i] = i;
    for (i = 9; i >= 0; i--) //逆序输出数组a中的10个元素
        printf("%d", a[i]);
    printf("\n");
    return 0;
}*/
/*
int main() {
    int i;
    int f[20] = {1, 1}; //对数组前两个元素f[0]和f[1]赋初值1
    for (i = 2; i < 20; i++) {
        f[i] = f[i - 2] + f[i - 1]; //先后求出f[2]~f[19]的值
    }
    for (i = 0; i < 20; i++) {
        if (i % 5 == 0)printf("\n");//控制每输出5个数后换行
        printf("%6d", f[i]);//输出各元素的值
    }
    return 0;
}*/
//n的阶层
/*
int main() {
    int i = 0;
    int n = 0;
    int ret = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        ret *= i;
    }
    printf("%d\n", ret);
    return 0;
}
*/
/*int main() {
    int arr[][4] = {{1, 2},
                    {3, 4},
                    {5, 6}};
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}*/
//二维数组案例p84
/*int main() {
    int a[2][3] = {{1, 2, 3},
                   {4, 5, 6}};//定义a数组，并赋初值
    int b[3][2], i, j;//定义b数组，不赋初值
    printf("a:\n");
    for (i = 0; i < 2; i++) { //用i控制行数
        for (j = 0; j < 3; j++) {//用j控制列数
            printf("%5d ", a[i][j]);
            b[j][i] = a[i][j]; //将a[i][j]赋值给b[j][i]
        }
        printf("\n");
    }
    printf("b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%5d ", b[i][j]);

        }
        printf("\n");
    }
    return 0;
}*/
//p85例题2
//有一个3x4的矩阵，要求编写程序求出其中值最大的那个元素的值，以及其所在的行号和列号
/*int main() {
    int a[3][4] = {{1, 2,  3,  4},
                   {5, 66, 7,  8},
                   {9, 10, 11, 12}};
    int i, j, max, temp, row = 0, column = 0;
    max = a[0][0];
    printf("a:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d ", a[i][j]);
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                column = j;
            }
        }
    }
    printf("\nmax=%d\nrow=%d\ncolumn=%d\n", max, row, column);
    return 0;
}*/
/*int main() {
    char c[11] = {'I', ' ', 'a', 'm', ' ', 'X', 'F', 'a', 'n', 'n', 'y'};
    int i;
    for (i = 0; i < 11; i++) {
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}*/
/*int main() {
    char diamond[2][3] = {{' ', '*', ' '},
                          {'*', ' ', '*'}};
//    int i, j;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            printf("%c", diamond[i][j]);
        printf("\n");
    }
}*/
//p91 输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。
/*int main() {
    char string[81];
    int i, num = 0, word = 0;
    char c;
    gets(string);//读入一个字符串给字符数组string
    for (i = 0; (c = string[i]) != '\0'; i++)//只要字符不是'\0'就继续执行循环
        if (c == ' ')word = 0;//如果字符是空格，使word置0
        else if (word == 0) { //如果字符不是空格且word原值为0
            word = 1; //使word置1
            num++;  //num累加1，表示增加一个单词
        }
    printf("There is %d words in the line.\n", num);//输出单词数
    return 0;
}*/
/*int main() {
*//*    char str[2];
    scanf("%s", str);
    printf("%c,%c\n", str[0], str[1]);*//*
    int a[2][3] = {{2, 4,  6},
                   {8, 10, 12}};
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }
    for (j = 0; j < 3; j++) {
        for (i = 0; i < 2; i++) {
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }
}*/




