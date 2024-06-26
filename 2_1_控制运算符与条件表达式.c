/*************************************************************************
	> 比较运算：比较运算符（==, !=, <, >, <=, >=）用于比较两个整数，并返回布尔值（1 表示真，0 表示假）。
			   这些运算在底层通过CPU指令实现，通常使用条件跳转指令。
	> 逻辑运算: 逻辑运算符（&&, ||, !）用于对布尔表达式进行逻辑运算。
			   && 和 || 运算符具有短路行为：如果第一个操作数可以确定整个表达式的结果，则不计算第二个操作数。
			   这些运算在底层也通过CPU指令实现，通常使用条件跳转指令。
	> 扩展内容: 
	  布尔类型：虽然C语言没有显式的布尔类型，但 0 和 1 通常用来表示布尔值（假和真）。
	  短路运算：&& 和 || 运算符具有短路行为：如果第一个操作数决定了结果，第二个操作数不会被计算。
	  输入验证和错误处理：在实际应用中，应检查 scanf 的返回值以确保输入成功。例如：if (scanf("%d%d", &a, &b) != 2) { printf("Error reading input\n"); return 1; }
 ************************************************************************/


#define _CRT_SECURE_NO_WARNINGS //如果你是在visual studio里运行此代码，请务必在文件开头添加宏定义来禁用警告，但这并不是最佳实践
#include<stdio.h>;

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	//比较运算符: 比较两个整数 a 和 b，并输出比较结果。结果为 1 表示条件为真，0 表示条件为假。
	printf("a == b (%d)\n", a == b); // a == b：如果 a 和 b 相等，结果为 1，否则为 0
	printf("a != b (%d)\n", a != b); //a != b：如果 a 和 b 不相等，结果为 1，否则为 0。
	printf("a < b (%d)\n", a < b);
	printf("a > b (%d)\n", a > b);
	printf("a <= b (%d)\n", a <= b);
	printf("a >= b (%d)\n", a >= b);
	printf("!(a == b) (%d)\n", !(a == b)); //!(a == b)：如果 a 和 b 相等，a == b 的结果为 1，取反后结果为 0；
	a += (a == b); // 赋值运算:将 a == b 的结果加到 a 上。如果 a == b 为 1，则 a 增加1。
	printf("a = %d\n", a);
	// 逻辑运算符:对表达式进行逻辑运算，并输出运算结果。结果为 1 表示条件为真，0 表示条件为假。
	printf("a < b && a == 3 (%d)\n", a < b && a == 3); // 判断 a 是否小于 b 且 a 是否等于3
	printf("a < b || a == 3 (%d)\n", a < b || a == 3); // 判断 a 是否小于 b 或 a 是否等于3
	printf("1 && 1 (%d)\n", 1 && 1); // 计算 1 与 1 的逻辑与,结果为 1（真）
	printf("1 && 0 (%d)\n", 1 && 0); //计算 1 与 0 的逻辑与, 结果为 0（假）
	printf("0 && 1 (%d)\n", 0 && 1);
	printf("0 && 0 (%d)\n", 0 && 0);
	printf("1 || 1 (%d)\n", 1 || 1);// 计算 1 与 1 的逻辑或,结果为 1（真）
	printf("1 || 0 (%d)\n", 1 || 0);// 计算 1 与 0 的逻辑或,结果为 1（真）
	printf("0 || 1 (%d)\n", 0 || 1);// 计算 0 与 1 的逻辑或,结果为 1（真）
	printf("0 || 0 (%d)\n", 0 || 0);// 计算 0 与 0 的逻辑或,结果为 0（假）
	return 0;
}
