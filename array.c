//
// Created on 2022/10/9.
//
#include <stdio.h>

int main() {
    int i, a[10]; //定义整型数组a，a包含10个元素
    for (i = 0; i <= 9; i++) //先后对10个数组元素赋值
        a[i] = i;
    for (i = 9; i >= 0; i--) //逆序输出数组a中的10个元素
        printf("%d", a[i]);
    printf("\n");
    return 0;
}