//
// Created by XFanny on 2022/11/19.
//
#include <stdio.h>

/*
int main() {
    char ch = 'c';
    char *pc = &ch;
    *pc = 'c';
    return 0;
}*/
/*
int main() {
    char *pstr = "hello world"; //这里是把一个字符串放到pstr指针变量里了吗？
    printf("%s\n", pstr);
    return 0;
}*/

//面试题《剑指offer》49
/*int main() {
    char str1[] = "hello xFanny";
    char str2[] = "hello xFanny";
    const char *str3 = "hello xFanny";
    const char *str4 = "hello xFanny";

    if (str1 == str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are different\n");
    if (str3 == str4)
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are different\n");
    return 0;
}*/

/*int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5};
    int (*parr)[10] = &arr; //取出的是数组的地址
    //parr就是一个数组指针 - 其中存放的是数组的地址

    double *d[5];
    double *(*pd)[5] = &d;//pd就是一个数组指针
    return 0;
}*/

/*int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (*pa)[10] = &arr;
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d ", *((*pa) + i));//1 2 3 4 5 6 7 8 9 10
    }

}*/
/*
void print1(int arr[3][5], int r, int c) {
    int i = 0;
    int j = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

//指针写法
//p是一个数组指针，指向某一行
void print2(int (*p)[5], int r, int c) {
    int i = 0;
    int j = 0;
    for (i = 0; i < r; i++)
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                printf("%d ", *(*(p + i) + j));
            }
            printf("\n");
        }
}

int main() {
    int arr[3][5] = {{1, 2, 3, 4, 5},
                     {2, 3, 4, 5, 6},
                     {3, 4, 5, 6, 7}};
//    print1(arr, 3, 5);
    print2(arr, 3, 5);//arr数组名，表示数组首元素的地址
    //二维数组的首元素是：第一行
    return 0;
}
*/
//一维数组传参
/*void test(int arr[]) {} //ok

void test(int arr[10]) {} //ok

void test(int *arr) {} //ok

void test2(int *arr[20]) {}//ok

void test2(int **arr) {}//ok

int main() {
    int arr[10] = {0};
    int *arr2[20] = {0};
    test(arr);
    test2(arr2);
}*/

//二维数组传参
/*void test(int arr[3][5]) {} //ok
void test(int arr[][]) {}   //NOT
void test(int arr[][5]) {}  //ok
//总结:二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素
//这样才方便运算
void test(int *arr) {}

void test(int *arr[5]) {}

void test(int (*arr)[5]) {}

void test(int **arr) {}

int main() {
    int arr[3][5] = {0};
    test(arr);
}*/
//一级指针传参
/*void print(int *p, int sz) {
    int i = 0;
    for (i = 0; i < sz; i++) {
        printf("%d\n", *(p + i));
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr;
    int sz = sizeof(arr) / sizeof(arr[0]);
    //一级指针p，传给函数
    return 0;
}*/
//二级指针传参
/*void test(int **ptr) {
    printf("num=%d\n", **ptr);
}

int main() {
    int n = 10;
    int *p = &n;
    int **p = &p;
    test(pp);
    test(&p);
    return 0;
}*/
/*void test(char *pp) {}

int main() {
    char c = 'x';
    char *pc = &c;
    char **ppc = &pc;
    char *arr[10];
    test(&pc);
    test(ppc);
    test(arr);
    return 0;
}*/
/*void test() {
    printf("xFany\n");
}

void (*pfun1)();

void *pfun2();

int main() {
    printf("%p\n", test);
    printf("%p\n", &test);
    return 0;
}*/
//p144
/*int main() {
    void copy_string(char from[], char to[]);
    char a[] = "hello AFanny";
    char b[] = "hello BFanny";
    printf("string a=%s\nstring b=%s\n", a, b);
    printf("\n将数组a复制到数组b的结果是：\n");
    copy_string(a, b); //用字符数组名作函数实参
    printf("\nstring a=%s\nstring b=%s\n", a, b);
    return 0;
}

void copy_string(char from[], char to[]) //形参为字符数组
{
    int i = 0;
    while (from[i] != '\0') {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}*/
//用字符型指针变量作实参
void copy_string(char from[], char to[]) {
    int i = 0;
    while (from[i] != '\0') {
        to[i] = from[i];
        i++;
        to[i] = '\0';
    }
}

int main() {
    char a[] = "hello AFanny";
    char b[] = "hello BFanny";
    
    return 0;
}

