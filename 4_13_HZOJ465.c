/************************************************************************
题目描述
​ 定义一函数digit(n,k)分离出整数n从右边数第k个数字。如digit(2076,1)等于6，而digit(2076,5)等于0。

​ main函数输入n和k，调用digit(n,k)输出答案，n在long long范围内。

输入
​ 一行两个整数，分别表示n和k，之间用一个空格隔开。

输出
​ 一行一个整数，表示整数n从右边数第k个数字。

样例输入
31859 3

样例输出
8

 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int digit(long long n, long long k) { // 使用基本数据类型 long long 来表示大整数。
	if (k == 1) return n % 10; // 如果 k 等于 1，返回 n 的最后一位数字（n % 10）。
	return digit(n / 10, k - 1); // 如果 k 不等于 1，递归调用 digit 函数，参数为 n 除以 10（去掉最后一位数字）和 k 减 1。
}

int main() {
	long long n, k; // 使用基本数据类型 long long 来表示大整数。
	scanf("%lld%lld", &n, &k);
	printf("%d\n", digit(n, k));
	return 0;
}
