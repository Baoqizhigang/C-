/*************************************************************************
	> ex_gcd 函数 : int ex_gcd(int a, int b)
	作用：使用扩展欧几里得算法计算两个整数 a 和 b 的最大公约数（GCD），并找到 x 和 y 使得 a * x + b * y = gcd(a, b)。
	参数：a 和 b 是两个整型变量，表示要计算最大公约数的两个数。
	返回值：返回 a 和 b 的最大公约数。

	> 扩展欧几里得算法的工作原理:
	扩展欧几里得算法不仅可以计算两个数的最大公约数，还可以找到整数 x 和 y 使得 a * x + b * y = gcd(a, b)。
	递归基：if (b == 0)：
		当 b 等于 0 时，设置 x = 1 和 y = 0，并返回 a。这是递归的终止条件。
	递归调用：int c = ex_gcd(b, a % b);：
		否则，递归调用 ex_gcd(b, a % b)，计算 b 和 a % b 的最大公约数。
		递归调用返回后，更新 x 和 y 的值：
			nx = y;：新的 x 等于当前的 y。
			ny = x - a / b * y;：新的 y 等于当前的 x 减去 a / b 乘以当前的 y。
			x = nx, y = ny;：更新全局变量 x 和 y。

	> EOF (End-O-File) Constant:
	The EOF (End-O-File) constant is a special value in C that indicates the end of a file. 
	When reading from a file using scanf, if the end of the file is reached, the function returns EOF. 
	This allows the program to detect the end of the file and terminate the loop.

	> != EOF Comparison:
	The != EOF comparison essentially checks whether the scanf function was able to successfully read 
	two integer values or not. If the function returns a value other than EOF (indicating successful input), 
	the loop continues. If the function returns EOF (indicating the end of the file), the loop terminates.

 ************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int x, y, nx, ny;

int ex_gcd(int a, int b) {
	if (b == 0) {
		x = 1, y = 0;
		return a;
	}
	int c = ex_gcd(b, a % b);
	nx = y;
	ny = x - a / b * y;
	return c;
}

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF) {
		int c = ex_gcd(a, b);
		printf("%d * %d + %d * %d = %d\n", a, x, b, y, c);
	}
	return 0;
}
