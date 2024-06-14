/*************************************************************************
	> 题目: 给出一个年份y和月份m， 求y年m月有多少天
	> 输入: 输入两个整数y,m表示年份和月份（1000<= y <= 3000, 1 <= m <= 12）
	> 输出: 输出y年m月的天数  
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 

int main() {
	int y, m, a; //声明三个整型变量 y（年），m（月），和 a（用于判断是否是闰年）
	scanf("%d%d", &y, &m);
	//y % 4 == 0：判断年份是否能被4整除。
	//	y % 100：判断年份是否不能被100整除。
	//	y % 400 == 0：判断年份是否能被400整除。
	a = (y % 4 == 0 && y % 100) || y % 400 == 0;
	// 判断月份 m 是否为 1、3、5、7、8、10 或 12。如果条件为真，执行 printf("31\n");，
	if (m == 1 || m == 3 || m == 5
		|| m == 7 || m == 8 || m == 10 || m == 12) {
		printf("31\n");
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		printf("30\n");
	}
	else {
		printf("%d\n", 28 + a); //如果 a 为真（即闰年），结果为 29；如果 a 为假（即非闰年），结果为 28。
	}
	return 0;

}
