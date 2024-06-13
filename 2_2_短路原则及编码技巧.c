/*************************************************************************
	> 逻辑运算: 逻辑运算符（&&, ||, !）用于对布尔表达式进行逻辑运算。
		    && 和 || 运算符具有短路行为：如果第一个操作数可以确定整个表达式的结果，则不计算第二个操作数。
	            这些运算在底层也通过CPU指令实现，通常使用条件跳转指令。短路运算可以提高代码的效率，并避免不必要的计算。
 ************************************************************************/


#define _CRT_SECURE_NO_WARNINGS //如果你是在visual studio里运行此代码，请务必在文件开头添加宏定义来禁用警告，但这并不是最佳实践

#include<stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	a < b && printf("YES\n"); // 如果 && 左侧的表达式为真，则右侧的表达式才会被执行。
	!(a < b) && printf("No\n"); //!：逻辑非运算符，取反。如果 a < b 为真，则 !(a < b) 为假
	printf("a * b = %d\n", a * b);
	printf("a = %d\n", a += b);
	return 0;
}

