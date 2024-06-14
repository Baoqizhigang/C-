/*************************************************************************
	> switch-case 语句: 
			switch-case 语句通过比较 switch 表达式的值与各个 case 标签的值来实现条件判断
			switch 关键字后跟一个表达式（通常是一个变量）
			表达式的值与各个 case 标签的值进行比较，并执行与匹配的 case 标签对应的代码块。
			条件判断在底层通过跳转表或一系列条件跳转指令实现，以提高执行效率。
			switch-case 语句适用于根据一个表达式的多个可能值执行不同代码块的场景。
			在实现菜单驱动的程序、状态机等情况下，switch-case 语句非常有用。
			编译器通常会对 switch-case 语句进行优化，例如使用跳转表或二分查找，以提高执行效率。
			switch-case 语句的执行效率通常比一系列的 if-else 语句更高，特别是在 case 标签数量较多时。

	> 工作流程: 
			计算 switch 表达式的值。
			从上到下依次检查每个 case 标签的值，直到找到与表达式值相等的标签。
			执行匹配 case 标签后面的代码块，直到遇到 break 语句或 switch 语句结束。
			如果没有找到匹配的 case 标签，则执行 default 标签后的代码块（如果存在）。

	> 编程范式:
			这段代码使用了命令式编程范式，按顺序执行一系列命令（输入、条件判断、输出）。
			代码中使用了 switch-case 条件判断语句，通过这些语句实现多分支的控制流。

	> 程序设计:
			这段代码通过 switch-case 语句实现了对输入值 a 的多分支控制，根据 a 的不同值输出不同的结果。
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 

int main() {
	int a;
	scanf("%d", &a);
	switch (a) { // 根据变量 a 的值，选择执行不同的代码块。
	    case 1: printf("case a = 1\n"); break; //如果 a 的值为 1，则执行 printf("case a = 1\n");break 语句终止 switch 语句的执行，跳出 switch 语句。
		case 2: printf("case a = 2\n"); break;
		case 3: printf("case a = 3\n"); break;
		case 4: printf("case a = 4\n"); break;
		default: printf("default value\n"); break;//当 a 的值不匹配任何 case 标签时，输出 default value 并跳出 switch 语句
	}
	return 0;
}
