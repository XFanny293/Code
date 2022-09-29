//
// Created on 2022/9/28.
//
#include <stdio.h>
#include <math.h>

//int main() {
//输入一个大于3的整数n，判定它是否为素数
/*    int n, i;
    printf("please enter a integer number,n=");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0)break;
        if (i < n)printf("%d is not a prime number.\n", n);
        else printf("%d is  a prime number.\n", n);
        return 0;
    }*/
//修改版
/*    int n, i, k;
    printf("please enter a integer number,n=");
    scanf("%d", &n); //输入一个整数n
    k = (int) sqrt(n); //强制转换类型，sqrt是double类型
    //对n求平方根，再取整
    for (int i = 2; i <= k; i++) {
        if (n % i == 0)break;
        if (i <= k)printf("%d is not a prime number.\n", n);
            //i作为除如果n被i整除，n一定不是素数
        else printf("%d is  a prime number.\n", n);
        return 0;
    }
}*/
//define 定义标识符常量
#define MAX 1000
//define 定义宏
/*#define ADD(x, y)((x)+(y))

int main() {
    int sum = ADD(2, 3);
    printf("sum=%d\n", sum);
    sum = 10 * ADD(2, 3);
    printf("sum=%d\n", sum);
    return 0;
}*/
//指针就是地址
/*
int main() {
    int a = 10;//a在内存中要分配空间的4个字节
    printf("%p\n", a);//%p专门用来打印地址的
    int *pa = &a;//pa是用来存放地址的，在C语言中pa是指针变量
    //*说明pa是指针变量
    //int说明pa指向的对象是int类型
    int b = 20;
    int *pb = &b;
    *pb = 30;//*解引用操作 *pa就是通过pa里边的地址，找到a
    printf("%d\n", b);
    return 0;
}
*/
//结构体
//创建一个学生
struct Stu {
    char name[20];//成员变量
    int age;
    double score;
};

int main() {
    struct Stu s = {"xfanny", 20, 99};//结构体的创建和初始化
    printf("%s%d%lf\n", s.name, s.age, s.score);//结构体变量.成员变量
    struct Stu *ps = &s;
    printf("2:%s%d%lf\n", (*ps).name, (*ps).age, (*ps).score);
    printf("2:%s%d%lf\n", ps->name, ps->age, ps->score);
    //结构体指针——> 成员变量名
    return 0;
}









