//
// Created on 2022/9/26.
//
#include <stdio.h>

int main() {
//    int year, leap;
//    printf("请输入年份：\n");
//    scanf("%d", &year);
    //第一种方法
    /*if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                leap = 1;
            else
                leap = 0;
        } else
            leap = 1;

    } else
        leap = 0;*/
    //第二种方法
    /*if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        leap = 1;
    else
        leap = 0;*/
/*    if (leap)printf("%d is a leap year.", year);
    else printf("%d is not a leap year.", year);
    printf("\n");
    return 0;*/
//书本p59应用题
    /*   int a;
       printf("请输入数字：\n");
       scanf("%d", &a);
       if (a % 3 == 0)
           printf("YES");
       else
           printf("NO");*/
/*    int i = 1, sum = 0; //定义变量i的初始值为1，sum为0
    while (i <= 100) {
        sum = sum + i;//第1次累加后，sum的值为1
        i++; //i的值加1，为下次累加做准备
    }
    printf("sum=%d\n", sum);
    return 0;*/


//while和do...while循环的比较
    int i, sum = 0;
    printf("请输入i的值，i=\n");
    scanf("%d", &i);
/*    while (i <= 10) {
        sum = sum + i;
        i++;
    }
    printf("sum=%d\n", sum);*/

    do {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("sum=%d", sum);
    return 0;
}