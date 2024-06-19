/*************************************************************************
	> 题目描述:
	输入一个字母x,输出字母对应的名字

	> 输入 :
	输入一个小写字母x （ a <= x <= z)

	> 输出 :
	输出对应的名字： 
	'h' 对应 "He";
	'l' 对应 "Li"; 
	'c' 对应 "Cao";
	'd' 对应 "Duan";
	'w' 对应 "Wang"
	不属于上述列表的字母输出NOT HERE

	> 条件判断和分支:
	switch 语句用于多分支选择，根据表达式的值跳转到对应的 case 标签。
	每个 case 标签后面跟一个值和冒号 :，表示匹配的条件。
	default 标签用于匹配所有未列出的情况。

	> 指针和字符串:
	指针用于存储变量的地址，可以通过指针访问和操作内存中的数据。
	字符串在C语言中是以字符数组形式存储的，以空字符 '\0' 结尾，每个字符占用一个字节。

 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char s[10]; // char 类型用于表示字符. 此处声明一个字符数组 s，长度为 10
	// 声明一个指向常量字符的指针 name，用于存储一个字符串常量的地址。
	const char* name; //const char* 类型用于表示指向常量字符的指针。
	scanf("%s", s);
	// switch (s[0]) { ... }  -> 根据字符串 s 的第一个字符执行相应的分支代码。
	switch (s[0]) {
	case 'h': name = "He\n"; goto PRINT; // 如果 s[0] 为 'h'，则将 name 设置为 "He\n"，并跳转到 PRINT 标签。
	case 'l': name = "Li\n"; goto PRINT;
	case 'c': name = "Cao\n"; goto PRINT;
	case 'd': name = "Duan\n"; goto PRINT;
	case 'w': name = "Wang\n"; goto PRINT;
	PRINT:
		printf("%s", name); break;
	default: printf("Not here\n"); break; // default: 如果没有匹配的 case，输出 "Not Here\n"。
	}
	return 0;
}
