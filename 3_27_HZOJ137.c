/*************************************************************************
	> 题目描述:
	参照案例要求输出字母三角形

	> 输入 :
	输入一个正整数 n。(0 < n < 7)

	> 输出 :
	按照样例的输出

	> 字符操作:
	字符在C语言中实际上是整数，使用ASCII码表示
	ch += 1 表示将字符变量 ch 的值增加 1，这在ASCII码表中意味着移动到下一个字符
 ************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int n;
    char ch = 'A'; // char 类型用于表示单个字符。ch 被初始化为字符 'A'
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
            ch += 1; // 将字符变量 ch 的值增加 1，移动到下一个字符。
        }
        printf("\n");
    }
    return 0;
}
