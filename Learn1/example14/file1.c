//
// Created by xfanny on 2022/10/30.
//例14 有一个字符串，内有若干个字符，现输入一个字符，要求程序将字符串中该字符删去。用外部函数实现。
/*
#include <stdio.h>

int main() {
    extern void enter_string(char str[]);
    extern void delete_string(char str[], char ch);
    extern void print_string(char str[]);
    // 以上3行声明在本函数中将要下龙的已在其他文件中定义的3个函数
    char c, str[80]; // 定义要删除的字符c和字符数组str
    enter_string(str); // 调用在其他文件中定义的enter_string函数
    scanf("%c", &c); //输入要求删去的字符
    delete_string(str, c); //调用在其他文件中定义的delete_string函数
    print_string(str); // 调用在其他文件中定义的print_string函数
    return 0;
}*/
