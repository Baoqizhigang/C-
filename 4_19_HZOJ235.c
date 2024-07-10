/*************************************************************************
题目地址：https://oj.haizeix.com/problem/235

> 递归和组合生成：该程序通过递归生成组合，展示了如何使用递归和数组来生成特定的数字组合。
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

int arr[10]; // 声明一个大小为 10 的整型数组 arr，用于存储组合的元素。

// 打印数组 arr 中的前 n+1 个元素。
void print_one_result(int n) {
    // 循环从 0 到 n。如果 i 不为 0，在元素前输出空格。打印 arr[i]。最后输出换行符。
    for (int i = 0; i <= n; i++) {
        if (i) cout << " ";
        cout << arr[i];
    }
    cout << endl;
    return;
}

// 递归生成从 j 到 n 的组合。
void f(int i, int j, int n) { // i：当前数组索引。j：当前起始数字。n：范围的上限。
    if (j > n) return;
    for (int k = j; k <= n; k++) { // 从 k = j 到 n，将 k 赋值给 arr[i]。
        arr[i] = k;
        print_one_result(i);
        f(i + 1, k + 1, n); // 调用 f(i + 1, k + 1, n)，生成后续组合。
    }
    return;
}

// 读取输入并调用递归函数。
int main() {
    int n; // 读取整数 n
    cin >> n;
    f(0, 1, n); // 调用 f(0, 1, n)，开始递归。
    return 0;
}
