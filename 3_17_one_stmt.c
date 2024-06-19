/*************************************************************************
	> while 循环:  
	while 循环用于在条件为真时重复执行代码块。
	while (n--) if (1) { ... }
	while (condition) statement; 形式。
	if (condition) statement; 形式，1 为真值，表示条件总是成立。

	> for 循环 :
	for 循环用于在已知次数的情况下重复执行代码块。
	for (initialization; condition; increment) statement; 形式。

	> 循环控制 :
	while 和 for 循环在每次迭代前检查条件表达式，如果条件为真，则继续执行循环体。
	增量表达式在每次循环结束后执行，更新循环控制变量。

	> 循环嵌套 :
	嵌套循环用于在一个循环体内嵌套另一个循环体，以处理多维数据结构或复杂的循环逻辑。
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	int n = 5;
	// 当 n 的值大于 0 时，执行循环体并减少 n 的值。由于条件 if (1) 永远为真，因此每次循环都会执行 if 语句块。
	while (n--) if (1) { // n-- 递减操作：先使用 n 的当前值，然后将其减少 1
		printf("hello world\n");
		printf("hello hangzhou\n");
	}
	//声明和初始化循环变量 i，但由于 for 循环体后面紧跟一个分号 ;，循环体为空，实际打印部分在 for 循环之后执行，并不会重复执行。
	for (int i = 0; i < 10; i++); {
		printf("one, two\n");
		printf("one, two\n");
		printf("one, two\n");
	}
	// 打印三次嵌套循环的组合 (i, j)，其中 i 从 1 到 3，j 从 3 到 5。
	for (int i = 1; i <= 3; i++) {// 外层循环初始化 i 为 1。如果条件为真，执行内层循环	
		for (int j = 3; j <= 5; j++) { // 内层循环初始化 j 为 3。如果为真，执行内层循环体。
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}
	return 0;
}
