/*************************************************************************
    > 等差数列的基本概念 : 
    等差数列是一种特殊的数列，每一项与前一项的差是一个定值，称为公差。
    等差数列的项数公式：n = (r - a1) / d + 1。
    等差数列的求和公式：sum = (a1 + an) * n / 2。
 ************************************************************************/

#include <stdio.h>

// 计算等差数列从 a1 到 r，公差为 d 的所有项的和。
// a1：等差数列的首项。r：等差数列的末项。d：等差数列的公差。
int sum(int a1, int r, int d) {
    int n = (r - a1) / d + 1;//计算从 a1 到 r 的项数: 从 a1 开始，每隔 d 增加一次，直到达到 r。
    int an = a1 + (n - 1) * d;// 计算等差数列的末项。公式为 a1 + (n - 1) * d，表示首项加上 n-1 个公差。
    return (a1 + an) * n / 2; // 使用等差数列的求和公式 (a1 + an) * n / 2 计算等差数列的和。
}

int main() {
    printf("%d %d %d\n",
        sum(1, 100, 1),
        sum(1, 100, 2),
        sum(26, 36999, 47)
    );
    return 0;
}
