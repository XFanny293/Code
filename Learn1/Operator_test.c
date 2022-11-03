//
// Created by xfanny on 2022/10/31.
//
#include <stdio.h>

/*int main() {
    int a = 2;
    //把a的二进制向左移动一位
    int b = a << 1;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}*/
//按位与
/*int main() {
    int a = 3;
    // 00000000000000000000000000000011
    int b = 5;
    // 00000000000000000000000000000101
    int c = a & b;
    // 00000000000000000000000000000001
    printf("a = %d, b = %d,c=%d\n", a, b, c);//1
    // & 就是二进制位 都是1的才能取1，不然全取0
    return 0;
}*/
//按位或
/*
int main() {
    int a = 3;
    // 00000000000000000000000000000011
    int b = 5;
    // 00000000000000000000000000000101
    int c = a | b;
    // 00000000000000000000000000000111
    printf("a = %d, b = %d,c=%d\n", a, b, c);//7
    // & 就是二进制位 有真则为真，有1则为1
    return 0;
}*/
//按位异或
//规则：相同为0，相异为1
/*
int main() {
    int a = 3;
    // 00000000000000000000000000000011
    int b = 5;
    // 00000000000000000000000000000101
    int c = a ^ b;
    // 00000000000000000000000000000110
    printf("a = %d, b = %d,c=%d\n", a, b, c);//6
    // & 就是二进制位 有真则为真，有1则为1
    return 0;
}*/
// 交换两个int变量的值，不能使用第三个变量。即a=3，b=5，交换之后 a=5，b=3；
/*
int main() {
    int a = 3;
    int b = 5;
    //第一种方法
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    //第二种方法
//    a = a + b;
//    b = a - b;
//    a = a - b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}*/
/*
int main() {
    int i = 0, a = 1, b = 2, c = 3, d = 4;
    i = a++ && ++b && d++;
    printf("a = %d, b = %d,c = %d,d = %d\n", a, b, c, d);
    return 0;
}*/
/*
int main() {
    int i = 0, a = 0, b = 2, c = 3, d = 4;
    i = a++ || ++b || d++;
    //因为a++为假-继续执行，++b是3为真，真或者任何都为真，所以后面都不执行
    printf("a = %d, b = %d,c = %d,d = %d\n", a, b, c, d);//1 3 3 4
    return 0;
}*/
/*
int Add(int x, int y) {
    return x + y;
}

int main() {
    int a = 10;
    int b = 20;
    // 函数调用
    int ret = Add(a, b); // () - 函数调用操作符
    return 0;
}*/
//int main() {
//    int i = 5;
//    do {
//        printf("%d\n", i);
//    } while (-i > 5);
//    printf("finished");
//
//}

//书：书名，书号，定价
//人：名字，年龄，性别
// 创建了一个自定义的类型
struct Book {
    // 结构体的成员（成员变量）
    char name[20];
    char id[20];
    int price;
};

int main() {
    int num = 10;
    // 结构体变量名.成员名
    struct Book b = {"C语言", "C20221103", 93};//结构体的成员访问
    struct Book *pb = &b;//结构体地址
    printf("书名：%s,书号：%s\n", (*pb).name, (*pb).id);//第一种，先解引用找到结果对象，再.的对象找到
    printf("书名：%s,书号：%s\n", pb->name, pb->id);// 第二种，pb是一个结构体指针，它指向一个对象name，pb->name是pb指向箭头name
    printf("===========================\n");
    printf("书名：%s,书号：%s\n", b.name, b.id);// . 操作符
    printf("价格：%d", b.price);
    return 0;
}