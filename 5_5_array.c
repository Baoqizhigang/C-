/*************************************************************************
多种数组的初始化和操作方式，以及如何使用 sizeof 运算符计算数组的大小，和如何打印数组元素及其地址。
每个函数都展示了不同的数组操作和初始化方法。

size_t：是一种无符号整数类型，通常用于表示对象的大小或数组的索引。它的定义在 <stddef.h> 或 <stdio.h> 头文件中。
特性：size_t 的大小和 unsigned int 或 unsigned long 相同，具体取决于系统的实现。在 32 位系统上，它通常是 32 位无符号整数；在 64 位系统上，它通常是 64 位无符号整数。
用途：size_t 通常用于返回 sizeof 运算符的结果，表示内存大小和数组索引。
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 定义一个不返回值的函数 test1。
void test1() {
    int a[10]; // 声明一个包含 10 个整数元素的数组 a-> 0 ~ n-1 
    for (int i = 0; i < 10; i++) {
        a[i] = 2 * i; //遍历数组，将数组元素设置为 2 * i。
    }
    for (int i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]); // 遍历数组，打印每个元素的索引和值。
    }
    return ;
}

// 定义一个不返回值的函数 test2
void test2() {
    int n; //声明一个整数变量 n
    printf("input n : "); // 提示用户输入一个整数。
    scanf("%d", &n);
    int a[2 * n]; //声明一个包含 2 * n 个整数元素的数组 a。
    for (int i = 0; i < 2 * n; i++) {
        a[i] = 3 * i; //遍历数组，将数组元素设置为 3 * i。
    }
    for (int i = 0; i < 2 * n; i++) {
        printf("a[%d] = %d\n", i, a[i]); //遍历数组，打印每个元素的索引和值。
    }
    return ;
}

void test3() {
    int a[5] = {0}; //声明一个包含 5 个整数元素的数组 a，并初始化所有元素为 0。
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]); //遍历数组，打印每个元素的索引和值。
    }
    return ;
}

void test4() {
    int a[5] = {1, 2, 3, 4, 5}; //声明一个包含 5 个整数元素的数组 a，并初始化为 {1, 2, 3, 4, 5}。
    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}

void test5() {
    int a[] = {1, 2, 3, 4, 5, 6, 7}; // 声明并初始化一个数组 a，包含 7 个整数元素
    // 计算数组 a 的大小 - size_t 通常用于返回 sizeof 运算符的结果，表示内存大小和数组索引
    size_t size = sizeof(a) / sizeof(int); // sizeof(a)：数组 a 所占内存的字节数。sizeof(int)：一个 int 类型的字节数。size：数组元素个数。
    printf("sizeof(a) / sizeof(int) = %lu\n", size); //使用 %lu 格式说明符输出无符号长整数（size_t）。
    printf("a = %p\n", a); //打印数组 a 的首地址，使用 %p 格式说明符输出指针地址
    printf("&a[0] = %p\n", &a[0]);
    for (int i = 0; i < size; i++) {
        printf("&a[%d] = %p\n", i, &a[i]);
    }
    return ;
}

int main() {
    // test1();
    // test2();
    // test3();
    // test4();
    test5();
    return 0;
}
