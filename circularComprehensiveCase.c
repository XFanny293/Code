//
// Created on 2022/9/28.
//
#include <stdio.h>
#include <math.h>

int main() {
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
    int n, i, k;
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
}

