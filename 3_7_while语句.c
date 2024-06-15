/*************************************************************************
	> 题目: 给出一个年份y和月份m， 求y年m月有多少天
	> 输入: 输入两个整数y,m表示年份和月份（1000<= y <= 3000, 1 <= m <= 12）
	> 输出: 输出y年m月的天数
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 

int main() {
    // 1 - n
    int n, i = 0;
    scanf("%d", &n);
    printf("program 1 : \n");
    while (i < n) {
        printf("%d\n", i + 1); // 0 ~ (n-1) ---> 1 ~ n
        i += 1;
    }
    printf("\n");
    printf("program 2 : \n");
    i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i += 1;
    }
    printf("program 3 : \n");
    i = 1;
    while (i <= n) printf("%d\n", i++);
    printf("program 4 : \n");
    i = 0;
    while (i < n) printf("%d\n", ++i);
    return 0;
}






