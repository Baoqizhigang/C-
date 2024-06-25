/*************************************************************************
	> gcd 函数 : int gcd(int a, int b)
	作用：计算两个整数 a 和 b 的最大公约数（GCD，Greatest Common Divisor）。
	参数：a 和 b 是两个整型变量，表示要计算最大公约数的两个数。
	返回值：返回 a 和 b 的最大公约数。
	逻辑：
		if (b == 0) return a;：如果 b 等于 0，返回 a。这也是递归的终止条件。
		return gcd(b, a % b);：否则，递归调用 gcd(b, a % b)，计算 b 和 a % b 的最大公约数。

	> 递归调用的工作原理:
		递归基：if (b == 0) return a; 当 b 为 0 时，返回 a。
		递归调用：return gcd(b, a % b); 使用欧几里得算法不断递归，直到 b 为 0。

	> 主函数 : int main()
	作用：程序的入口函数，读取用户输入的两个整数，并计算它们的最大公约数。
	逻辑：
		声明两个整型变量 a 和 b。
		使用 while (scanf("%d%d", &a, &b) != EOF) 循环读取用户输入的两个整数 a 和 b，并调用 gcd(a, b) 计算它们的最大公约数。
		printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));：打印计算结果。
		循环结束条件是 scanf 返回 EOF，即用户输入结束。

 ************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int gcd(int a, int b) {
	if (b == 0) return a; // 递归终止条件是 b == 0，此时返回 a。
	return gcd(b, a % b);
}

/*
int gcd(int a, int b) {
	while (b != 0) {
		a = b;
		b = a % b;
	}
	return a;
}
*/

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) { //  检查输入是否成功，并处理循环。
		printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
	}
	return 0;
}
