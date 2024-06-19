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

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // 如果 n 是偶数，跳转到 if_stmt 标签, 否则跳转到 else_stmt 标签。
    // ({ goto if_stmt; 1; }) 是一个 GCC 语法扩展，表示一个代码块，执行 goto if_stmt; 语句，然后返回 1。
    // && 是逻辑与运算符，前面的条件为真时，才会执行后面的表达式。
    n % 2 == 0 && ({ goto if_stmt; 1; });
    !(n % 2 == 0) && ({ goto else_stmt; 1; });
if_stmt: // 定义标签 if_stmt，用于标记代码位置，后跟一个冒号。
    printf("%d is even\n", n);
    goto if_end; // 跳转到 if_end 标签，跳过中间的 else_stmt 部分
else_stmt:
    printf("%d is odd\n", n);
if_end:
    return 0;
}
