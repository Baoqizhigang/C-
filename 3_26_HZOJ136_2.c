/*************************************************************************
	> 题目描述:
	给定一个正整数，输出n以内（含）所有7的倍数

	> 输入 :
	输出一个正整数n。（n <= 1000)

	> 输出 :
	输出所有小于n的7的倍数，每行一个数。

	> 循环控制:
	for 循环用于在已知次数的情况下重复执行代码块。
	for (initialization; condition; increment) statement; 形式是 for 循环的标准结构
	for (initialization; condition; increment) statement; 形式。
	for (int i = 1; i <= n; i++) { ... }
	initialization 是循环变量的初始化表达式，这里将 i 初始化为 1。
	condition 是循环条件表达式，当 condition 为真时，循环体 statement 被执行。
	increment 是每次循环结束后执行的表达式，这里是 i++，表示 i 每次增加 1。

 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		// 在每次循环中，检查当前值 i 是否是 7 的倍数，如果不是，则跳过本次循环，继续下一次迭代。
		if (i % 7) continue;
		printf("%d\n", i);
	}
	return 0;
}
