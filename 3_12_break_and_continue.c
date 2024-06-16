/*************************************************************************
	> 循环控制:
	for 循环在每次迭代前检查条件表达式，如果条件为真，则继续执行循环体。
	增量表达式在每次循环结束后执行，更新循环控制变量。
	break 语句用于提前终止循环，continue 语句用于跳过当前迭代的剩余部分。

	> break 和 continue:
	break 语句用于提前终止循环，跳出当前循环体。
	continue 语句用于跳过当前迭代的剩余部分，直接进入下一次循环。

	> 条件控制结构：
	if 语句用于条件判断，根据条件执行不同的代码块。
	在循环中使用 if 语句可以控制循环的执行流程
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("%d", i + 1);
		//检查 if (i + 1 == 8) 条件，如果为真，执行 break 语句提前终止循环。
		if (i + 1 == 8) break; 
	}
	printf("\n");
	for (int i = 1; i <= n; i++) {
		// 检查 if (i % 3 == 0) 条件，如果为真，执行 continue 语句跳过当前迭代的剩余部分(不执行printf函数)，直接进入下一次循环。
		if (i % 3 == 0) continue;
		printf("%d", i);
	}
	printf("\n");
	return 0;
}
