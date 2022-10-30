#include <stdio.h>

//
// Created by xfanny on 2022/10/30.
//
void enter_string(char str[80]) {  // 定义外部函数enter_string，用来输入字符串
    gets(str); // 向字符数组输入字符串
}

void delete_string(char str[], char ch) {
    int i, j;
    for (i = j = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            str[j++] = str[i];
    str[j] = '\0';
}

void print_string(char str[]) {
    printf("%s\n", str);
}