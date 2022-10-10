//
// Created on 2022/10/9.
//
#include <stdio.h>

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
}