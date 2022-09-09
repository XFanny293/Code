//
// Created on 2022/9/5.
//
#include <stdio.h>

int main() {
    /*  //使被定义的变量的一部分赋初值
      int a, b, c = 3;
      printf("%d\n", a);
      printf("%d\n", b);
      printf("%d\n", c);//指定a，b，c为整型变量，c的初值为3*/

    //2.6运算符和表达式
/*    int a = 15, b = 7, d;
    double c = (double) a / b + 0.8;
    d = a / b;
    printf("%f\n", c);
    printf("%d\n", d);*/
    /* float x = 7.5;
     int y;
     y = (int) x % 3;
     printf("x=%f,y=%d\n", x, y);*/
    //第2章课后应用题，题目：输入两个数a、b，交换它们的值，然后输出交换后的结果
    /* int a, b, temp;
     printf("请输入a，b的值,以英文逗号隔开\n");
     scanf("%d,%d", &a, &b);
     temp = a;
     a = b;
     b = temp;
     printf("%d,%d", a, b);*/

    //用3个getchar函数先从键盘向计算机输入Cxf字符，然后用putchar函数输出
    char a, b, c;   //定义字符变量a,b,c,d
    a = getchar();    //从键盘输入一个字符，送给字符变量a、b、c、d
    b = getchar();
    c = getchar();
    putchar(a);     //将变量a的值输出
    putchar(b);
    putchar(c);
    putchar('\n');  //换行
    return 0;
}

