/*************************************************************************
	> 题目描述:
	判断一个整数a能否被另一个整数b整除

	> 输入 :
	输入两个整数a,b (1 <= a,b <=500)

	> 输出 :
	a能被b整除输出YES, 否则输出NO

	> 三元运算符 :
	三元运算符 condition ? expression1 : expression2 是一种简洁的条件表达方式，可以替代简单的 if-else 结构。
	condition 是一个逻辑表达式，如果 condition 为真（非零），则计算并返回 expression1；否则，计算并返回 expression2。

 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	// 使用三元运算符检查 a 是否可以被 b 整除，并根据结果输出相应的字符串。
	printf("%s\n", a % b == 0 ? "YES" : "NO");
	return 0; // 返回 0，表示程序正常结束。
}
