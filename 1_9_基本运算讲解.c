/*************************************************************************
	> 预处理器：宏定义是在预处理阶段处理的。预处理器会将所有宏展开，并替换代码中的宏调用。
	> 宏的优点和缺点：宏可以提高代码的可读性和复用性，但也可能导致代码难以调试和理解，特别是在宏定义较为复杂时。
	> 表达式求值顺序：在宏展开过程中，要注意表达式求值的顺序以及可能的副作用（如多次计算表达式）。
	> 整型除法：C语言中的整型除法只保留商的整数部分，忽略余数。这在计算除法结果时需要特别注意。
 ************************************************************************/


#include<stdio.h>
// 这是一条宏定义，它定义了一个名为 PRINT 的宏。宏在预处理阶段展开。
// 这个宏首先打印出 stmt 作为字符串，然后执行 stmt 语句，最后执行 func 语句
// 宏定义中的 \ 表示行继续符，用于将宏定义分成多行，以增加可读性。
#define PRINT(stmt, func) { \
	printf("%s\n", #stmt); \ //  使用 # 将 stmt 转换为字符串并输出。
	stmt; \                  // stmt是宏的参数; 执行 stmt 语句
	func; \                  // func是宏的参数; 执行 func 语句
}

int main() {
	int a = 5, b = 2, c = 7, d;// 声明四个整型变量，并初始化a, b, c这三个整型变量，分别赋值为5, 2, 7
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	// 调用 PRINT 宏，首先打印出 a = c，然后执行 a = c; 将 a 的值设为 c 的值（即7），最后打印出 a, b, c 的当前值。
	PRINT(a = c, printf("a = %d, b = %d, c = %d\n", a, b, c));
	// 调用 PRINT 宏，首先打印出 d = a + c，然后执行 d = a + c; 将 d 的值设为 a 和 c 的和（即14），最后打印出 d 的当前值。
	PRINT(d = a + c, printf("d = %d\n", d));
	PRINT(d = a - b, printf("d = %d\n", d));
	PRINT(d = a * b, printf("d = %d\n", d));
	PRINT(d = a / b, printf("d = %d\n", d));     // 整型除法只保留整数部分(向0取整）
	PRINT(d = (-a) / b, printf("d = %d\n", d)); // 整型除法只保留整数部分(向0取整）
	PRINT(d = a % b, printf("d = %d\n", d));
	return 0;
}
