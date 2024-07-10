/*************************************************************************
题目地址：https://oj.haizeix.com/problem/236

> 这段代码实现了递归生成指定长度的组合，并使用多个标准库来支持不同的数据结构和算法。
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

// 打印数组 arr 中从索引 0 到 n 的元素。
void print_one_result(int n) {
    for (int i = 0; i < n; i++) {
        if (i) cout << " "; // 使用 cout 打印数组元素，i 不为 0 时，前面加空格
        cout << arr[i];
    }
    cout << endl;
    return;
}

// 递归生成从 j 到 n 的组合。
void f(int i, int j, int n, int m) { // i：当前数组索引。j：当前起始数字。n：范围的上限。m：组合的长度。
    if (i == m) { // 基准条件，当 i 等于 m 时，打印组合并返回
        print_one_result(m);
        return;
    }
    //for 循环从 k = j 到 n，确保剩余元素可以填满组合。
    for (int k = j; k <= n && m - i - 1 <= n - k; k++) {
        arr[i] = k; //将 k 赋值给 arr[i]
        f(i + 1, k + 1, n, m); // 递归调用 f(i + 1, k + 1, n, m) 生成后续组合
    }
    return;
}

int main() {
    int n, m; //声明整型变量 n 和 m
    cin >> n >> m; // 使用 cin 读取用户输入的整数 n 和 m
    f(0, 1, n, m); // 调用 f(0, 1, n, m) 开始递归生成组合。
    return 0;
}
