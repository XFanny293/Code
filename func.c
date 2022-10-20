//
// Created by xFanny on 2022/10/14.
//
#include<stdio.h>
#include <string.h>

/*
void Swap(int *pa, int *pb) {
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}

int main() {
    int a = 10;
    int b = 20;
    printf("交换前：a=%d，b=%d\n", a, b);
    Swap(&a, &b);
    printf("交换后：a=%d,b=%d\n", a, b);
    return 0;
}*/
/*int main() {
    int max(int x, int y);
    int a, b, c;
    printf("请输入数字，以逗号隔开:\n");
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("max:%d\n", c);
    return 0;
}

int max(int x, int y) {
    int z;
    z = x > y ? x : y;
    return (z);
}*/
/* //判断是否为素数
int is_prime(int x) {
    int j = 0;
    for (j = 2; j < x; j++) {
        if (x % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    //100~200之间的素数
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++) {
        //判断i是否为素数
        if (is_prime(i) == 1) {
            count++;
            printf("%d\n", i);
        }
    }
    printf("%d\n", count);
    return 0;
}*/
/* //判断是否为闰年
int is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int y = 0;
    for (y = 1000; y <= 2000; y++) {
        if (is_leap_year(y) == 1) {
            printf("%d\n", y);
        }
    }
}*/
/*
int binary_search(int a[], int k, int s) {
    int l = 0, r = s - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] > k) {
            r = mid - 1;
        } else if (a[mid] < k) {
            l = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;//找不到的情况
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    //找到就返回找到的位置的下标
    //找不到就返回-1
    int ret = binary_search(arr, key, sz);
    if (-1 != ret) {
        printf("找不到\n");
    } else {
        printf("找到了，下标是:%d\n", ret);
    }
    return 0;
}*/
/*
int main() {
    float add(float x, float y);//对add函数作声明
    float a, b, c;
    printf("请输入a和b,以英文逗号隔开\n");
    scanf("%f,%f", &a, &b);
    c = add(a, b); //调用add函数
    printf("sum:%f\n", c);
    return 0;
}

float add(float x, float y) {
    float z = 0;
    z = x + y;
    return z; //把变量z的值作为函数值返回
}*/
//链式访问：把一个函数的返回值作为另一个函数的参数
/*
int main() {
    int len = strlen("cxf");
    printf("%d\n", len);
    //链式访问
    printf("%d\n", strlen("cxf"));
    printf("%d", printf("%d", printf("%d", 43)));//4321
    return 0;
}*/
//p105例5
/*
int main() {
    int max4(int a, int b, int c, int d);//对max4函数的声明
    int a, b, c, d, max;
    printf("please enter 4 integer numbers:");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max = max4(a, b, c, d);//调用max4函数，得到4个数中最大者
    printf("max=%d\n", max);
    return 0;
}

int max4(int a, int b, int c, int d) {
    int max2(int a, int b);//对函数max2的声明
    int m;
    m = max2(a, b);//调用max2函数，得到a和b两个数中的较大者，放在m中
    m = max2(m, c);//调用max2函数，得到a，b，c这3个数中的较大者，放在m中
    m = max2(m, d);
    return (m);
}

int max2(int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}*/
//p108 例6
/*
int main() {
    int fac(int n);
    int n, y;
    printf("input an integer number:");
    scanf("%d", &n);
    y = fac(n);
    printf("%d\n", n, y);
    return 0;
}

int fac(int n) {
    int f;
    if (n < 0)
        printf("n<=0,data error");
    else if (n == 1)
        f = 1;
    else f = fac(n - 1) * n;
    return (f);
}*/
/* 递归练习题
int my_strlen(char *str) {
    if (*str != '\0') return 1 + my_strlen(str + 1);
    else return 0;
}

int main() {
    char arr[] = "cxf";
    printf("%d\n", my_strlen(arr));
    return 0;
}*/
//递归与迭代：求n的阶乘
/*
int Fac(int n) {
    if (n <= 1)
        return 1;
    else
        return n * Fac(n - 1);
}

int main() {
    int n = 0;
    scanf("%d", &n);
*/
/*    int i = 0;
    int ret = 1;
    //迭代，循环是一种迭代的方法
    for (i = 0; i <= n; i++) {
        ret = ret * i;
    }
    printf("%d", ret);*//*

    int ret = Fac(n);
    printf("%d", ret);
    return 0;
}*/
//斐波那契数列
/*
int Fib(int n) {
    if (n <= 2)return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}

int main() {
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d", ret);
    return 0;
}*/
//例7 输入10个数，要求输出其中值最大的元素和该数的位置。
int main() {
    int max(int x, int y);//函数声明
    int a[10], m, n, i;
    printf("enter 10 integer numbers:");
    for (i = 0; i < 10; i++)  //循环给a[0]~a[9]赋值
        scanf("%d", &a[i]);
    printf("\n");
    for (i = 0, m = a[0], n = 0; i < 10; i++) {
        if (a[i] > m) { //若max函数返回的值大于m
            m = max(m, a[i]);//max函数返回的值取代m的原值
            n = i; //把此数组元素的序号记下来，放在n中
        }
    }
    printf("The largest number is %d\nit is the largest number.\n", m, n + 1);
    return 0;
}

int max(int x, int y) {
    return (x > y ? x : y);
}