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
}