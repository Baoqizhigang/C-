/*************************************************************************
	> 函数调用机制 :
	在函数调用时，会将参数压入栈，函数执行完毕后，返回结果并清理栈空间。

	> 函数调用和递归 :
	递归是指函数直接或间接调用自身的编程技术。这里的函数相互调用展示了函数相互调用的机制。
	递归调用需要特别注意终止条件，以防止无限递归。
 ************************************************************************/


# include <stdio.h>

// 在 main 函数之前声明，声明两个函数 a_func 和 b_func，以便在 main 函数中调用。每个函数接收一个整型参数并返回一个整型值。
int a_func(int);
int b_func(int);

int main() {
	a_func(1);
	b_bunc(2);
	return 0;
}

int b_func(int x) {
	// 使用 switch 语句根据 x 的值选择执行路径。
	switch (x) {
		case 1: printf("3 * x = %d\n", 3 * x); break;
		case 2: return a_func(x);
	}
	return 0;//默认情况下返回 0
}

int a_func(int x) {
	// 使用 switch 语句根据 x 的值选择执行路径。
	switch (x) {
		case 1: return b_func(x);
		case 2: printf("2 * x = %d\n", 2 * x); break;
	}
	return 0;//默认情况下返回 0
}
