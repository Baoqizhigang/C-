/*************************************************************************
	> 题目要求: 读入一个两位的个位不为零的正整数，将它的十位数和个位数调换后输出
	> 输入: 一个整数（11 <= n <= 99）
	> 输出: 一个整数表示调换后的数

	常见的格式说明符有 %d（整数）、%f（浮点数）、%c（字符）、%s（字符串）等。
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS //如果你是在visual studio里运行此代码，请务必在文件开头添加宏定义来禁用警告，但这并不是最佳实践
#include<stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	int shi, ge;
	shi = a / 10;
	ge = a % 10;
	printf("%d%d\n", ge, shi);
	return 0;
}
