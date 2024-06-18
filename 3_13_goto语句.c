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


#include<stdio.h>

int main() {
	// 程序直接跳转到 lab_1 标签所在的位置，跳过中间的 printf("hello world\n"); 语句。
	goto lab_1; //  label 是一个标识符, 用来定义标签的位置，表示代码中要跳转的位
	printf("hello world\n");
lab_1:// 标签是一个标识符，紧跟一个冒号，用于标记一个代码位置，以便 goto 语句跳转
	printf("hello hangzhou\n");
	//--------------------//
	goto lab_2;
	// 此段代码被跳过，不会执行，因为程序已经跳转到了 lab_2 标签。
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
lab_2:
	// 由于 a 和 b 并未在本程序中初始化，所以有可能会出现很奇怪的结果，甚至是报错（取决于你用的是什么编译器）
	printf("%d\n", a * b);
	return 0;
