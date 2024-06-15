/*************************************************************************
    > EOF 的概念: EOF 是一个常量，表示文件结束符（End Of File）。
                 在 Unix 系统中，通常通过按下 Ctrl+D 发送 EOF。在 Windows 系统中，通常通过按下 Ctrl+Z 发送 EOF。
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 

int main() {
    int x; // 声明一个整型变量 x，用于存储用户输入的整数
    // 不断读取用户输入的整数，直到输入结束（EOF）;只要 scanf 的返回值不是 EOF，循环继续执行。
    // scanf 的返回值表示成功读取的输入项数。如果输入结束，scanf 返回 EOF。
    while (scanf("%d", &x) != EOF) {
        printf("2*x = %d\n", x * 2);
    }
    return 0;
}
