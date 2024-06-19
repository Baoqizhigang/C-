/*************************************************************************
	> goto 语句: goto 语句用于无条件跳转到指定的标签。
	虽然 goto 语句可以实现（从多重循环或深层嵌套中）无条件跳转，但在现代编程中应尽量避免使用，因为它会导致程序结构混乱，难以维护和理解。
	在实际应用中，应尽量使用结构化的控制语句（如 if-else、for、while）代替 goto。

	> 程序计数器 :
	作用：程序计数器（Program Counter，PC）保存当前正在执行的指令的地址。
	工作流程：goto 语句修改程序计数器的值，使其指向标签所在的位置，从而实现跳转。
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 1;

for_1:
	goto for_2;

for_2:
	// if (condition) statement1; else statement2; 形式。
	if (i <= n) goto for_4;
	else goto for_end;

for_3:
	i++; //i++; 是 i = i + 1; 的简写。
	goto for_2;

for_4:
	if (i % 3 == 0) goto for_3; // 如果 i 能被 3 整除，跳转到 for_3 标签。
	printf("%d", i);
	goto for_3;

for_end:
	printf("\n");
	return 0;
}
