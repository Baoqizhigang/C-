/*************************************************************************
	> define _CRT_SECURE_NO_WARNINGS这行代码是一个预处理指令，用于在编译前告诉编译器禁用与不安全函数相关的警告。
	> 在Visual Studio中，某些函数（如scanf）被认为是不安全的，建议使用更安全的版本（如scanf_s）。
	> 通过定义_CRT_SECURE_NO_WARNINGS，我们可以避免这些警告。
	示例运行步骤：
	1. 用户输入 12345。
    2. scanf("%d", &n); 读取输入值并将其存储在变量 n 中。
    3. printf("%d", n); 输出 12345 并返回输出字符的数量（5），这个值被存储在 digit 中。
    4. printf(" has %d digit(s)\n", digit); 输出 12345 has 5 digit(s)
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> // 预处理指令，它包含了标准输入输出库头文件。

int main() {
	int n, digit; // 声明了两个整型变量 n 和 digit
	scanf("%d", &n);//scanf 函数用于从标准输入读取一个整数，并将其存储在变量 n 中。& 符号表示取变量的地址
	// printf 函数会输出变量 n 的值到屏幕上。
	// printf 函数会返回输出的字符数，并将其存储在变量 digit 中。
	digit = printf("%d", n);
	printf(" has %d digit(s)\n", digit);// %d 占位符将被变量 digit 的值替换
	return 0;
}
