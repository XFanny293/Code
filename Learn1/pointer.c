//
// Created by xfanny on 2022/11/13.
//
#include<stdio.h>
/*
//指针类型的意义
//1. 指针类型决定了：指针解引用的权限有多大
//2. 指针类型决定了，指针走一步，能走多远（步长）
int main() {
    int arr[10] = {0};
    int *p = arr;
    char *pc = arr;
    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%p\n", pc);
    printf("%p\n", pc + 1);
}
*/
// 越界访问
/*int main() {
    int arr[10] = {0};
    int *p = arr;
    int i = 0;
    for (i = 0; i <= 10; i++) {
        //当指针指向的范围超出数组arr的范围时，p就是野指针
        *p = i;
        p++;
    }
    return 0;
}*/
/*#define N_VALUES 5

int main() {
    float value[N_VALUES];
    float *vp;
// 指针+-整数；指针的关系运算
    for (vp = &value[0]; vp < &value[N_VALUES];) {
        *vp++ = 0;
    }
}*/
/*
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", &arr[9] - &arr[0]); //9
    return 0;
}*/
/*
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("%p\n", arr); //0x7ff7b3708430
    printf("%p\n", &arr[0]); //0x7ff7b3708430
    return 0;
}*/

/*
int main() {
    int a = 10;
    int *pa = &a; //pa是指针变量，一级指针
    //ppa就是一个二级指针变量
    int **ppa = &pa; //pa也是个变量，&pa取出pa在内存中起始地址
    return 0;
}*/

/*
int main() {
    int arr[2];//整型数组 - 存放整型的数组就是整型数组
    char ch[9];//字符数组 - 存放的是字符
    // 指针数组 - 存放指针的数组
    int *parr[3]; //整型指针的数组
    char *pch[5];
    return 0;
}*/
void swap(int *p1, int *p2) {
    int temp;
    temp = *p1; //使*p1和p2互换
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a, b;
    int *p1, *p2;
    printf("请输入两个整数：");
    scanf("%d,%d", &a, &b);
    p1 = &a;  //使*p1指向a
    p2 = &b;  //使*p2指向b
    if (a < b)swap(p1, p2); // 如果a<b，调用swap函数
    printf("max=%d,min=%d\n", a, b);
    return 0;
}






