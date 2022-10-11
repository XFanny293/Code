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
int main() {
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
}








