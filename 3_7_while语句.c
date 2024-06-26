/*************************************************************************
	> 循环控制结构: while 循环是一种基本的循环控制结构，适用于当循环次数不确定，但需要在满足某个条件时结束循环的情况。
                   循环控制变量（如 i）在每次迭代中更新，以保证循环能够在适当的时候结束。

	> 自增和自减运算符: i++ 和 ++i 是自增运算符，用于将变量 i 的值增加 1。
                      i++ 是后缀自增，先使用当前值，然后再增加。
                      ++i 是前缀自增，先增加，然后再使用新值。

 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 

int main() {
    // 1 - n
    int n, i = 0; // 声明两个整型变量 n 和 i，并初始化 i 为 0
    scanf("%d", &n); //户输入一个整数，scanf 函数将其存储在 n 中。
    printf("program 1 : \n");
    // while 关键字后跟一个条件表达式和一个代码块。每次循环检查 i < n 是否为真，只要条件表达式为真，循环就会继续执行。
    while (i < n) { 
        printf("%d\n", i + 1); // 0 ~ (n-1) ---> 1 ~ n
        i += 1;
    }
    printf("\n");
    
    printf("program 2 : \n");
    i = 1; // 初始化 i 为 1
    //每次循环检查 i <= n 是否为真，如果为真，则输出 i，增加 i 的值，使其每次递增 1。
    while (i <= n) {
        printf("%d\n", i);
        i += 1;
    }
    
    printf("program 3 : \n");
    i = 1; // 初始化 i 为 1
    //每次循环检查 i <= n 是否为真，如果为真，则输出 i，然后 i 自增（后缀自增）。
    while (i <= n) printf("%d\n", i++); // 使用后缀自增 i++，先输出 i 的当前值，然后再将 i 增加 1
    
    printf("program 4 : \n");
    i = 0; //初始化 i 为 0
    //每次循环检查 i < n 是否为真，如果为真，则先将 i 自增，然后输出 i 的当前值。
    while (i < n) printf("%d\n", ++i);// 使用前缀自增 ++i，先将 i 增加 1，然后输出 i 的新值
    return 0;
}






