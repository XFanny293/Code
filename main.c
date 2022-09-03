/*#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
day1*/

/*以下为day2内容
 * #include <stdio.h>
int main(){
    int a,b,c,v;
    a=5;
    b=3;
    c=2;
    v=a*b*c;
    printf("长方形体积为:%d\n",v);
    //双引号中的内容称为"输出控制格式控制",用来控制输出数据的格式。"%d"用于输出十进制整数
    return 0;
}*/

/*
#include <stdio.h>
//实数数据的舍入误差
int main(){
    float a=1212.1415926;
    printf("a=%f\n",a);
    //%f是输出实数所用的格式说明
    return 0;
    //由于a是单精度浮点型变量,只能提供6~7为有效数字,所以输出结果的后面纪委小数并不确定.
    // 为了提高数据的精度,可以将变量定义为双精度类型,从而得到15~16位有效位数.
    //一般在C编译系统自动将float型数据都自动转换为double型,然后进行运算
}*/

#include<stdio.h>
int main(){
    float h=3,r=1.5,pi=3.1415926,v;//定义实型变量并赋初值
    v=pi*r*r*h;
    printf("圆柱体积为:v=%f\n",v);
}
//2022-09-03
//Recorded on 2022-09-03