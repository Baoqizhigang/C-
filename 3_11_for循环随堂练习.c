/*************************************************************************
	> 斐波那契数列计算: 
	这段代码通过两个不同的 for 循环实现了前 20 个斐波那契数的计算和输出。
	第一个 for 循环使用三个变量 a, b 和 c。
	第二个 for 循环通过 f1 和 f2 两个变量实现更简洁的计算。。

	> 斐波那契数列: 
	斐波那契数列是一个递推数列，其定义为：F(n) = F(n-1) + F(n-2)，其中 F(1) = F(2) = 1。
	这段代码通过循环实现了斐波那契数列的计算。

	> for 循环的不同变体：
	第一个 for 循环使用了三个变量 a, b 和 c，通过赋值和加法实现斐波那契数列的递推。
	第二个 for 循环使用了两个变量 f1 和 f2，通过增量表达式同时更新两个变量的值，实现了更简洁的递推计算。

 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 1, b = 1, c;
	// for 关键字后跟三个表达式和一个代码块 { ... }, 打印前 20 个斐波那契数
	// 第一个表达式 int i = 0 是初始化表达式，第二个表达式 i < 20 是循环条件表达式,只要条件为真（非零），循环就会继续执行。
	// 第三个表达式 i++ 是增量表达式，每次循环结束后执行，增加 i 的值。
	for (int i = 0; i < 20; i++) {
		printf("%d", a);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");

	// 第一个表达式是初始化表达式，设置循环控制变量 i 的初始值为 0，并初始化斐波那契数的两个变量 f1 和 f2。
	// 第二个表达式 i < 20 是循环条件表达式，只要条件为真（非零），循环就会继续执行。
	// 第三个表达式是增量表达式，每次循环结束后执行，增加 i 的值，同时更新斐波那契数的两个变量
	for (int i = 0, f1 = 1, f2 = 1; i < 20; i++, f2 += f1, f1 = f2 - f1) {
		printf("%d", f1);
	}
	printf("\n");
	return 0;
}
