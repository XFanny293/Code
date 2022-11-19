//结构体
// Created by xFanny on 2022/11/17.
//
//结构的声明
#include <stdio.h>
#include <stddef.h>

/*typedef struct Stu {
    char name[20]; //名字
    int age;       //年龄
    char sex;      //性别
    char id[20];   //学号
} Stu; //分号不能丢*/
/*struct Point {
    int x;
    int y;
} p1; //声明类型的同时定义变量p1
struct Point p2; //定义结构体变量p2

// 初始化：定义变量的同时赋初值
struct Point p3 = {x, y};
struct Stu { //类型声明
    char name[15]; //名字
    int age; //年龄
};
struct Stu s = {"XFanny", 20};//初始化

struct Node {
    int data;
    struct Point p;
    struct Node *next;
} n1 = {10, {9, 3}, NULL}; //结构体嵌套初始化
struct Node n2 = {20, {1, 18}, NULL}; //结构体嵌套初始化*/

//访问结构体成员
/*struct Stu{
    char name [20];
    int age;
};
struct S s;
strcpy(s.name,"XFanny");//使用.访问name成员
s.age = 20; */
//指针访问结构体成员
/*struct Stu {
    char name[20];
    int age;
};

void print(struct Stu *ps) {
    printf("name=%s age=%d\n", (*ps).name, (*ps).age);
    //使用结构体指针访问指向对象的成员
    printf("name=%s age=%d\n", ps->name, ps->age);
}

int main() {
    struct Stu s = {"XFanny", 20};
    print(&s);
    return 0;
}*/


//结构体传参
/*
struct S {
    int data[1000];
    int num;
};
struct S s = {{1, 2, 3, 4}, 1000};

//结构体传参
void print1(struct S s) {
    printf("%d\n", s.num);
}

void print2(struct S *ps) {
    printf("%d\n", ps->num);
}

int main() {
    print1(s);//传结构体
    print2(&s);//传地址
    return 0;
}*/
