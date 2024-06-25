/*************************************************************************
	> print 函数 : void print(int n)
	作用：递归打印从 1 到 n 的所有整数，每次打印一个数。
	参数：n 是一个整型变量，表示要打印的数。
	逻辑：
		if (n == 1) { printf("%d\n", n); return; }：如果 n 等于 1，打印 1 并返回。
		print(n - 1);：递归调用 print 函数，传入 n - 1。
		printf("%d\n", n);：递归调用返回后，打印当前的 n。
		return;：函数结束。。

	> main 函数: int main()
	作用：递归调用自身，并在每次调用时打印 main : n，直到 cnt 等于 1。
	逻辑：
		int n = cnt;：将全局变量 cnt 的值赋给局部变量 n。
		cnt -= 1;：将全局变量 cnt 减 1。
		if (n == 1) { printf("main : %d\n", n); return 0; }：如果 n 等于 1，打印 main : n 并返回 0。
		main();：递归调用 main 函数。
		printf("main : %d\n", n);：递归调用返回后，打印 main : n。
		return 0;：函数结束。

	> 递归设计:
	递归函数 print 用于打印从 1 到 n 的所有整数，通过递归调用自身来实现。
	main 函数也采用递归设计，通过递归调用自身来递减 cnt 并打印结果。

	> 全局变量和局部变量 :
	全局变量 cnt 可以在多个函数中使用，其值在整个程序的生命周期内保持有效。
	局部变量 n 只在其所在的函数作用域内有效。

 ************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int n) {
	if (n == 1) {
		printf("%d\n", n);
		return;
	}
	printf(n - 1);
	printf("%d\n", n);
	return;
}

int cnt = 1001;

int main() {
	int n = cnt;
	cnt -= 1;
	if (n == 1) {
		printf("main : %d\n", n);
		return 0;
	}
	main();
	printf("main : %d\n", n);
	return 0;
}
