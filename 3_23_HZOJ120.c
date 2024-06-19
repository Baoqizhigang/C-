/*************************************************************************
	> 题目描述:
	输入一个日期，判断这个日期是否存在。
	1,3,5,7,8,10,12月有31天
	4,6,9,11月有30天
	非闰年2月有28天，闰年的2月有29天；
	非整百年，能被4整除的为闰年，整百年，能被400整除的是闰年

	> 输入 :
	输入三个整数y,m,d表示年月日（ -10 <= y，m,d <= 3000)

	> 输出 :
	如果日期存在输出YES否则NO

 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int y, m, d, days; // 声明四个整型变量 y（年）、m（月）、d（日）和 days（当前月的天数）。
	scanf("%d%d%d", &y, &m, &d); // 从标准输入读取三个整数，并分别存储在变量 y、m 和 d 中。
	// if (condition) statement; 形式，其中 condition 是逻辑表达式，statement 是在条件为真时执行的语句。
	if (m == 1 || m == 3 || m == 7 || m == 8 || m == 10 || m == 12) days = 31; // '||' 是逻辑或运算符，表示其中一个条件为真即可。
	else if (m == 4 || m == 6 || m == 9 || m == 11) days = 30;
	// y % 4 == 0 && y % 100 表示年份 y 能被 4 整除但不能被 100 整除。
	// y % 400 == 0 表示年份 y 能被 400 整除。
	// 28 + ((y % 4 == 0 && y % 100) || (y % 400 == 0)) 会在闰年时返回 29，在平年时返回 28。
	else days = 28 + ((y % 4 == 0 && y % 100) || (y % 400 == 0));
	if (m <= 0 || m >= 13 || d <= 0 || d > days) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
	return 0;
}
