/*************************************************************************
	> 题目要求: 输入一个不超过10000的整数，计算它每一位上的数字总和
	> 输入: 一个整数（1 <= n <= 10000）
	> 输出: 输出这个整数每一位的数字和

	> 补充内容：
	工作流程：
		scanf 函数等待用户输入一个字符串，输入的字符串不能包含空白字符（空格、换行符、制表符等）。
		输入的字符串将被存储在数组 s 中，并自动在末尾加上一个空字符 \0 以标识字符串的结束。
	内存分配：
		在声明变量 s, a, b, c, d 时，计算机会在栈内存上为这些变量分配空间。
		s 是一个字符数组，a, b, c, d 是整型变量。
	指针与数组：
		数组名 s 在表达式中被解释为指向数组第一个元素的指针。这意味着 scanf("%s", s); 等价于 scanf("%s", &s[0]);。
		当 sscanf 将字符串 s 中的字符转换为整数时，通过指针将转换后的整数存储到相应的变量中。
	字符串结束符：
		C语言中的字符串是以空字符 \0 结尾的字符数组。scanf 会自动在输入字符串末尾添加 \0，以标识字符串的结束。
	缓冲区溢出：
		使用 scanf 读取字符串时，如果输入字符串长度超过数组的大小（在本例中超过9个字符），会导致缓冲区溢出。缓冲区溢出会覆盖相邻的内存，可能导致程序崩溃或产生未定义行为。应使用更安全的函数如 fgets 来防止缓冲区溢出。
		示例：fgets(s, sizeof(s), stdin);
	格式说明符：
		printf 和 scanf 使用格式说明符来处理不同类型的数据。%d 表示整数，%1d 表示读取或输出一个一位的整数。
		sscanf 的格式字符串 "%1d%1d%1d%1d" 表示依次读取最多4个一位的十进制整数。
	输入验证和错误处理：
		在实际应用中，应检查 scanf 和 sscanf 的返回值以确保输入成功。
		例如：if (scanf("%d", &n) != 1) { printf("Error reading input\n"); return 1; }
 ************************************************************************/


#define _CRT_SECURE_NO_WARNINGS //如果你是在visual studio里运行此代码，请务必在文件开头添加宏定义来禁用警告，但这并不是最佳实践

#include <stdio.h>

int main() {
	// 下一条代码是声明一个字符数组 s，长度为10。char 类型用于表示字符
	char s[10]; // 在栈（stack）上为字符数组 s 分配内存空间。数组s可以存储最多9个字符（加上一个空字符 \0 用于标识字符串的结束）。
	// 下一条代码是从标准输入（通常是键盘）读取一个字符串，并将其存储在字符数组 s 中。
	scanf("%s", s); // "%s"：格式字符串，表示读取一个字符串。s：字符数组 s 的地址。数组名 s 作为参数传递时，会被解释为指向数组第一个元素的指针。
	int a = 0, b = 0, c = 0, d = 0; // 声明并初始化四个整型变量 a, b, c 和 d，初始值均为0。
	// 下一条代码sscanf 函数从字符串 s 中读取最多4个一位的十进制整数，并将它们分别存储在变量 a, b, c, d 中。
	// 如果字符串 s 长度小于4，则未读取的变量保持其初始值0。
	sscanf(s, "%1d%1d%1d%1d", &a, &b, &c, &d); // "%1d%1d%1d%1d"：格式字符串，表示依次读取最多4个一位的十进制整数。
	printf("%d\n", a + b + c + d);
	return 0;
}
