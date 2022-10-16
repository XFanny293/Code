//
// Created by xFanny on 2022/10/14.
//
#include<stdio.h>

/*
void Swap(int *pa, int *pb) {
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}

int main() {
    int a = 10;
    int b = 20;
    printf("交换前：a=%d，b=%d\n", a, b);
    Swap(&a, &b);
    printf("交换后：a=%d,b=%d\n", a, b);
    return 0;
}*/
/*int main() {
    int max(int x, int y);
    int a, b, c;
    printf("请输入数字，以逗号隔开:\n");
    scanf("%d,%d", &a, &b);
    c = max(a, b);
    printf("max:%d\n", c);
    return 0;
}

int max(int x, int y) {
    int z;
    z = x > y ? x : y;
    return (z);
}*/
/* //判断是否为素数
int is_prime(int x) {
    int j = 0;
    for (j = 2; j < x; j++) {
        if (x % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    //100~200之间的素数
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++) {
        //判断i是否为素数
        if (is_prime(i) == 1) {
            count++;
            printf("%d\n", i);
        }
    }
    printf("%d\n", count);
    return 0;
}*/
/* //判断是否为闰年
int is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int y = 0;
    for (y = 1000; y <= 2000; y++) {
        if (is_leap_year(y) == 1) {
            printf("%d\n", y);
        }
    }
}*/
/*
int binary_search(int a[], int k, int s) {
    int l = 0, r = s - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] > k) {
            r = mid - 1;
        } else if (a[mid] < k) {
            l = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;//找不到的情况
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    //找到就返回找到的位置的下标
    //找不到就返回-1
    int ret = binary_search(arr, key, sz);
    if (-1 != ret) {
        printf("找不到\n");
    } else {
        printf("找到了，下标是:%d\n", ret);
    }
    return 0;
}*/
int main() {

}