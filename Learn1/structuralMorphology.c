//
// Created by XFanny on 2022/12/14.
//
//用字符指针变量作形参和实参
#include<stdio.h>
#include<string.h>
/*void copy_string(char *from, char *to) { //定义函数，形参为字符指针变量
    for (; *from != '\0'; from++, to++) {
        *to = *from;
    }
    *to = '\0';
}

int main() {
    char *a = "hello AFanny";
    char b[] = "hello BFanny";
    char *p = b;
    printf("string a=%s\nstring b=%s\n", a, b);
    printf("\n将数组a复制到数组b的结果是：\n");
    copy_string(a, p);
    printf("\nstring a=%s\nstring b=%s\n", a, b);
    return 0;
}*/

/*int main() {
    struct Student { //声明结构体类型struct Student
        long int num; //以下4行为结构体的成员
        char name[20];
        char sex;
        char addr[20];
    }
            a = {10101, "XFanny", 'W', "Guandong"}; //定义结构体变量a并初始化
    printf("NO.%d\nname:%s\nsex:%s\naddr:%s\n", a.num, a.name, a.sex, a.addr);
    return 0;
}*/
/*
struct Person {
    char name[20]; //候选人姓名
    int count; //候选人得票数
} leader[3] = {"Chen", 0, "He", 0, "Zhong", 0};//定义结构体数组并初始化
int main() {
    int i, j;
    char leader_name[20];//定义字符数组
    for (i = 0; i <= 10; i++) {
        scanf("%s", leader_name); //输入所选的候选人姓名
        for (j = 0; j < 3; j++) {
            if (strcmp(leader_name, leader[j].name) == 0) {
                leader[j].count++;
            }
        }
    }
    printf("\nResult:\n");
    for (i = 0; i < 3; i++)
        printf("%5s:%d\n", leader[i].name, leader[i].count);
    return 0;
}*/

//p158 例3 用n个学生的信息（包括学号、姓名、成绩），要求按照成绩的高低顺序输出各学生的信息。
/*struct Student {
    int num;
    char name[20];
    float score;
};

int main() {
    struct Student stu[5] = {{01, "Zhang", 78},
                             {02, "Chen",  99},
                             {03, "Wang",  97.5},
                             {04, "He",    93},
                             {05, "Yang",  60}};//定义结构体数组并初始化
    struct Student temp; //定义结构体变量temp，用作交换时的临时变量
    const int n = 5;  //定义常变量n
    int i, j, k;
    printf("The order is:\n");
    for (i = 0; i <= n - 1; i++) {
        k = i;
        for (j = i + 1; j < n; j++)
            if (stu[j].score > stu[k].score)
                k = j;
        temp = stu[k];
        stu[k] = stu[i];
        stu[i] = temp;
    }
    for (i = 0; i < n; i++)
        printf("%6d%8s%6.2f\n", stu[i].num, stu[i].name, stu[i].score);
    printf("\n");
    return 0;
}*/
int main() {
    struct Student {
        long num;
        char name[20];
        char sex;
        float score;
    };
    struct Student stu_1; //定义struct Student类型的变量stu_1
    struct Student *p;    //定义指向struct Student类型数据的指针变量p
    p = &stu_1;             //p指向stu_1
    stu_1.num = 10101;      //对结构体变量的成员赋值
    strcpy(stu_1.name, "XFanny"); //用字符串赋值函数给stu_1.name赋值
}











