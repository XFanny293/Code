//
// Created by xFanny on 2022/11/20.
//
#include <stdio.h>
#include <math.h>

/* 使用指针打印数组内容
 * 写一个函数打印arr数组的内容，不使用下标，使用指针
 * arr是一个整形一维数组*/
/*
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sz);
    for (int i = 0; i < sz; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}*/

/*
 * 求出0~100000之间的所有"水仙花数"并输出
"水仙花数"是指一个n位数，其各位数字的n次方之和等于该数本身
如：153=1^3+5^3+3^3，则153就是一个"水仙花数"
 */

/*int main() {
    int i = 0;
    for (i = 0; i <= 10000; i++) {
        //判断i是否会自幂数
        //1. 计算i的位数 -n
        int n = 1;
        int temp = i;
        while (temp / 10) {
            n++;
            temp = temp / 10;
        }
        //2. 计算i的每一位的n次方之和
        temp = i;
        int sum = 0;
        while (temp) {
            sum += pow(temp % 10, n);//pow是库函数来求次方数的
            temp = temp / 10;
        }
        //3. 判断
        if (sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}*/




