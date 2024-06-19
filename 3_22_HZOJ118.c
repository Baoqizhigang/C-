/*************************************************************************
	> 题目描述:
	已知1900年是鼠年，输入一个年份，输出其对应生效
	鼠	Rat	牛	Ox	虎	Tiger	兔	Rabbit	龙	Dragon	蛇	Snake	
	马  Horse 羊	 Sheep	猴	Monkey	鸡	Rooster	狗	Dog	猪	Pig

	> 输入 :
	输入一个整数year表示年份（ 1 <= year <= 9999)

	> 输出 :
	输出一个单词表示生肖

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
	int y;
	const char *name; //声明一个指向常量字符的指针 name，用于存储一个字符串常量的地址。const char* 类型用于表示指向常量字符的指针。
	scanf("%d", &y); // 从标准输入读取一个整数，并存储在整型变量 y 中。
	// 计算 ((y - 1900) % 12 + 12) % 12，求 y 减去 1900 后的年份偏移量，取 12 的余数，确保结果为非负数。
	switch (((y - 1900) % 12 + 12) % 12) {
		case 0: name = "rat"; break;
		case 1: name = "ox"; break;
		case 2: name = "tiger"; break;
		case 3: name = "rabbit"; break;
		case 4: name = "dragon"; break;
		case 5: name = "snake"; break;
		case 6: name = "horse"; break;
		case 7: name = "sheep"; break;
		case 8: name = "monkey"; break;
		case 9: name = "rooster"; break;
		case 10: name = "dog"; break;
		case 11: name = "pig"; break;
	}
	printf("%s\n", name);
	return 0;
}

