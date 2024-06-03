//这段代码涵盖了C语言中的变量声明和初始化、基本数据类型、溢出、常量、格式化输出、浮点数、字符操作以及使用 sizeof 运算符获取类型大小等基础知识。

#include <stdio.h>    //是提供输入输出函数如 printf的标准输入输出库，
#include <inttypes.h>  // 提供了固定大小的整数类型和相应的宏定义，如 INT32_MIN 和 INT32_MAX。

//int main() 是程序的入口点。每个C程序都从 main 函数开始执行。
//return 0; 表示程序成功结束。
int main() {     
	int a = 123, b = 97, c, d; // int（4字节，32位） 声明了整数类型的变量。a 和 b 在声明时初始化为 123 和 97。
	c = 100062; // c 和 d 先声明，后在程序中赋值。
	d = 9651;
	printf("%d %d %d %d\n", a, b, c, d); //printf 用于输出格式化字符串。%d 占位符表示输出整数。\n 表示换行。
	a = 2147483647 + 1; //2147483647是 int 类型的最大值，加1会导致溢出，结果是未定义的，但在许多系统上会循环到负值。
	printf("%d\n", a);
	printf("INT32_MIN = %d\n", INT32_MIN);//INT32_MIN 和 INT32_MAX 是32位整数的最小值和最大值，定义在 inttypes.h 中。
	printf("INT32_MAX = %d\n", INT32_MAX);//int32的取值范围（-2147483647， 2147483647）
	long long e; // long long （长整型）类型用于表示比 int 更大的整数。
	e = 2147483647 + 1LL; // 1LL 是 long long 类型的常量。
	printf("%lld\n", e); // %lld 是长整型的占位符
	float f = e + 0.1; // float 和 double 是浮点数类型，分别用于单精度和双精度浮点数。
	double ff = e + 0.123456789; 
	// %.9f 和 %.9lf 用于指定输出浮点数的小数点后九位。
	// 注意，双精度浮点型只能保证前15位数字的准确性，不确保之后数字的准确性
	printf("float : %.9f\n", f);    //%f 是单精度浮点型的占位符
	printf("double : %.9lf\n", ff); //%lf 双单精度浮点型的占位符
	char g = 'a'; //char 类型用于表示单个字符，字符在C语言中实际上是整数，可以进行算术运算。
	printf("g = %c\n", g); // %c 是字符型变量的占位符表示输出字符，字符型底层存储的就是具体数字，
	printf("g(%%d) = %d\n", g); // 字符型变量可以当做整型来对待，可做四则混合运算
	printf("g + 5 = %c\n", g + 5); // 102数字对应的字符是f
	printf("48 = %c\n", 48);
	// sizeof 用于获取类型或变量的大小（以字节为单位）,%lu 占位符表示输出 unsigned long 类型的整数。
	printf("sizeof(int) = %lu\n", sizeof(int)); 
	printf("sizeof(long long) = %lu\n", sizeof(long long));
	printf("sizeof(float) = %lu\n", sizeof(float));
	printf("sizeof(double) = %lu\n", sizeof(double));
	printf("sizeof(char) = %lu\n", sizeof(char));
	return 0;
}

