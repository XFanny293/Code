//
// Created by xfanny on 2022/11/13.
//
#include<stdio.h>
/*
//指针类型的意义
//1. 指针类型决定了：指针解引用的权限有多大
//2. 指针类型决定了，指针走一步，能走多远（步长）
int main() {
    int arr[10] = {0};
    int *p = arr;
    char *pc = arr;
    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%p\n", pc);
    printf("%p\n", pc + 1);
}
*/
// 越界访问
/*int main() {
    int arr[10] = {0};
    int *p = arr;
    int i = 0;
    for (i = 0; i <= 10; i++) {
        //当指针指向的范围超出数组arr的范围时，p就是野指针
        *p = i;
        p++;
    }
    return 0;
}*/
/*#define N_VALUES 5

int main() {
    float value[N_VALUES];
    float *vp;
// 指针+-整数；指针的关系运算
    for (vp = &value[0]; vp < &value[N_VALUES];) {
        *vp++ = 0;
    }
}*/
/*
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", &arr[9] - &arr[0]); //9
    return 0;
}*/
/*
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("%p\n", arr); //0x7ff7b3708430
    printf("%p\n", &arr[0]); //0x7ff7b3708430
    return 0;
}*/

/*
int main() {
    int a = 10;
    int *pa = &a; //pa是指针变量，一级指针
    //ppa就是一个二级指针变量
    int **ppa = &pa; //pa也是个变量，&pa取出pa在内存中起始地址
    return 0;
}*/

/*
int main() {
    int arr[2];//整型数组 - 存放整型的数组就是整型数组
    char ch[9];//字符数组 - 存放的是字符
    // 指针数组 - 存放指针的数组
    int *parr[3]; //整型指针的数组
    char *pch[5];
    return 0;
}*/
/*void swap(int *p1, int *p2) {
    int temp;
    temp = *p1; //使*p1和p2互换
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a, b;
    int *p1, *p2;
    printf("请输入两个整数：");
    scanf("%d,%d", &a, &b);
    p1 = &a;  //使*p1指向a
    p2 = &b;  //使*p2指向b
    if (a < b)swap(p1, p2); // 如果a<b，调用swap函数
    printf("max=%d,min=%d\n", a, b);
    return 0;
}*/

//下标法
/*
int main() {
    int a[10];
    int i;
    printf("请输入10个整数：");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("%d", a[i]);//数组元素用数组名和下标表示
    }
    printf("\n");
    return 0;
}
*/
//通过数组名计算数组元素地址，找出元素的值
/*int main() {
    int a[10];
    int i;
    printf("请输入10个整数：");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
        //(a+i)是a数组中序号为i的元素的地址，*(a+i)是该元素的值
        printf("%d", *(a + i)); //通过数组名和元素序号计算元素地址，再找到该元素
    printf("\n");
    return 0;
}*/

//用指针变量指向数组元素
/*int main() {
    int a[10];
    int *p, i;
    printf("请输入10个整数：");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (p = a; p < (a + 10); p++)
        printf("%d", p);  //用指针指向当前的数组元素
    printf("\n");
    return 0;
}*/
//p136 例3
/*int main() {
    void inv(int x[], int n);  //inv函数声明
    int i, a[10] = {2, 9, 3, 11, 0, 6, 7, 5, 4, 2};
    printf("原始数组为：\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]); // 输出未交换时数组各元素的值
    printf("\n");
    inv(a, 10); //调用inv函数，进行交换
    printf("反序后数组为：\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]); //输出交换后数组各元素的值
    printf("\n");
    return 0;
}

void inv(int x[], int n) {
    int temp, i, j, m = (n - 1) / 2;
    for (i = 0; i < m; i++) {
        j = n - 1 - i;
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    return;
}*/
//修改程序
/*void inv(int *x, int n) {
    int *p, temp, *i, *j, m = (n - 1) / 2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; i++, j--) {
        temp = *i;
        *i = *j;
        *j = temp;
    }
    return;
}

int main() {
    int i, a[10] = {2, 9, 3, 11, 0, 6, 7, 5, 4, 2};
    printf("原始数组为：\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    inv(a, 10);
    printf("反序后数组为：\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}*/

/*int main() {
    int j, a[] = {1, 3, 5, 7, 9, 11, 13, 15}, *p = a + 5;
    for (j = 4; j > 0; j--) {
        switch (j) {
            case 1:
            case 2:
                printf("%d ", *p);
                break;
            case 3:
                printf("%d ", *(--p));
            case 4:
                printf("%d ", *(--p));
        }
    }
}*/


/*int main() {
    char string[] = "I love study!";
    printf("string数组存放的字符串是：%s\n", string); //用%s格式声明输出整个字符串
    printf("该字符串的第8个字符是：%c\n", string[7]); //用%c格式输出一个字符数组元素
    return 0;
}*/

//例7
/*int main() {
    char a[] = "I am chinese", b[20]; //定义字符数组
    int i;
    for (i = 0; *(a + i) != '\0'; i++)
        *(b + i) = *(a + i); //用地址法访问数组元素
    *(b + i) = '\0'; //在b数组的有效字符之后加'\0'
    printf("string a is:%s\n", a); //输出a数组中全部有效字符
    printf("string b is:");
    for (i = 0; b[i] != '\0'; i++)
        printf("%c", b[i]);  //用下标法访问数组元素
    printf("\n");
    return 0;
}*/

//指针写法
/*int main() {
    char a[] = "I am chinese", b[20], *p1, *p2;
    p1 = a;
    p2 = b; //p1,p2分别指向a数组和b数组中的第一个元素
    for (; *p1 != '\0'; p1++, p2++) //p1,p2每次自加1
        *p2 = *p1; //将p1所指向的元素的值赋给p2所指向的元素
    *p2 = '\0';    //在复制完全部有效字符后加'\0'
    printf("string a is:%s\n", a); //输出a数组中的字符
    printf("string b is:%s\n", b); //输出b数组中的字符
    return 0;
}*/







