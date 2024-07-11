/*************************************************************************
题目地址：https://oj.haizeix.com/problem/239

> 这段代码实现了基于希尔伯特曲线的坐标计算，并使用递归函数来处理复杂的分块和坐标变换。
 ************************************************************************/



#include <iostream> // 提供输入输出流功能，常用的 cin 和 cout。
#include <cstdio> // 提供 C 标准输入输出功能，如 printf 和 scanf
#include <cstdlib> // 提供 C 标准库功能，如动态内存分配和程序控制。
#include <queue> // 提供队列数据结构。
#include <stack> // 提供栈数据结构。
#include <algorithm> // 提供算法功能，如排序、查找。
#include <string> // 提供字符串类 std::string。
#include <map> // 提供关联容器 std::map
#include <set> // 提供集合容器 std::set。
#include <vector> // 提供动态数组容器 std::vector。

using namespace std; // 使用标准命名空间，简化代码编写，不需要在标准库前加 std::

// 定义一个宏 S，用于计算一个数的平方。宏在预处理阶段进行替换，因此 S(a) 将被替换为 (a) * (a)
#define S(a) ((a) * (a))


void f(long long n, long long s, long long& x, long long& y) {// n：当前递归深度。s：当前的序号。x 和 y：用于存储计算出的坐标，作为引用传递。
    // 递归地计算希尔伯特曲线在第 n 阶段的坐标
    if (n == 1) { // 当 n 为 1 时，根据 s 的值设置 (x, y). 根据 s 所在的块，递归地计算子块的坐标。
        if (s == 1) x = 0, y = 0;
        else if (s == 2) x = 0, y = 1;
        else if (s == 3) x = 1, y = 1;
        else x = 1, y = 0;
        return;
    }
    long long L = 1LL << (n - 1);
    long long block = L * L;
    long long xx, yy;
    if (s <= block) { // 1:(x, y) -> (y, x)
        f(n - 1, s, xx, yy);
        x = yy, y = xx;
    }
    else if (s <= 2 * block) { // 2:(x, y) -> (x, y + L)
        f(n - 1, s - block, xx, yy);
        x = xx, y = yy + L;
    }
    else if (s <= 3 * block) { // 3:(x, y) -> (x + L, y + L)
        f(n - 1, s - 2 * block, xx, yy);
        x = xx + L, y = yy + L;
    }
    else { // 4:(x, y) -> (2 * L - y - 1, L - x - 1)
        f(n - 1, s - 3 * block, xx, yy);
        x = 2 * L - yy - 1, y = L - xx - 1;
    }
    return;
}

// 读取输入并调用函数 f 计算结果，最后输出结果
int main() {
    long long t, n, s, d; // 声明长整型变量 t, n, s, d
    scanf("%lld", &t); // 使用 scanf 读取 t 的值，表示测试用例的数量。
    while (t--) { // 使用 while (t--) 依次处理每个测试用例
        scanf("%lld%lld%lld", &n, &s, &d); // 读取 n, s, d 的值。
        long long sx, sy, dx, dy;
        f(n, s, sx, sy); // 调用函数 f(n, s, sx, sy) 计算起点 s 的坐标 sx 和 sy。
        f(n, d, dx, dy); // 调用函数 f(n, d, dx, dy) 计算终点 d 的坐标 dx 和 dy。
        printf("%.0lf\n", 10 * sqrt(S(sx - dx) + S(sy - dy))); // 计算两点之间的欧几里得距离，并乘以 10，结果保留到小数点后 0 位。
    }
    return 0;
}
