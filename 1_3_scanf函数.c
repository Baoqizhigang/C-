/*************************************************************************
	> scanf函数
	> 头文件：stdio.h
	> 原型：int scanf(const char *format, ...);
	> format: 格式控制字符串
	> ...: 可变参数列表（放入要读入参数的变量的地址）
	> 返回值: 成功读入参数的个数
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS //如果你是在visual studio里运行此代码，请务必在文件开头添加宏定义来禁用警告，但这并不是最佳实践
#include<stdio.h>

int main() {
	int a, b, n;//a 和 b 用于存储用户输入的整数值，n 用于存储 scanf 函数的返回值
	printf("normal scanf, input a, b: ");//printf 函数用于输出字符串 "normal scanf, input a, b: " 到屏幕上
	// scanf 函数用于从标准输入读取两个整数，并将其分别存储到 a 和 b 中。scanf返回成功读取的输入项的个数。 
	n = scanf("%d%d", &a, &b);// & 符号表示取变量的地址，这是因为 scanf 需要知道数据存储的位置。
	printf("a = %d, b = %d\n", a, b);
	printf("n = %d\n", n);//输出scanf 函数的返回值 n
	printf("format scanf, input %%dabc%%d: ");//%% 用于输出字符 %。
	n = scanf("%dabc%d", &a, &b);//这行代码尝试读取输入格式为整数、字符串 "abc" 和另一个整数。如果输入不符合这个格式，scanf 将停止读取。
	printf("a = %d, b = %d\n", a, b);
	// 接下来是一系列连续的 scanf 调用，尝试读取单个整数并输出返回值
	// 每次 scanf 调用读取一个整数，并将其存储在 a 中。输出 scanf 的返回值 n。
	// 当输入无法转换为整数时，scanf 返回0；如果输入流结束，返回 EOF。
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	n = scanf("%d", &a);
	printf("n = %d\n", n);
	printf("EOF = %d\n", EOF);//输出 EOF 的值，EOF 是一个常量，用于表示文件结束（End Of File）。
	return 0;//表示程序成功结束，返回值0通常表示程序正常终止
}
