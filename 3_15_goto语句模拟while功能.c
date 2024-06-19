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
	int n, i = 1;
	scanf("%d", &n);

judge: // 定义标签 judge，用于标记代码位置。
	if (i <= n) goto stmt; // 如果条件为真（即 i <= n），则执行 goto stmt; 跳转到 stmt 标签。
	else goto while_end; // 如果条件为假（即 i > n），则执行 goto while_end; 跳转到 while_end 标签。

stmt:
	printf("%d", i); // 输出当前 i 的值。
	i += 1; // 将 i 的值增加 1
	goto judge; // 程序直接跳转到 judge 标签所在的位置。

while_end:
	printf("\n");
	return 0;
}
