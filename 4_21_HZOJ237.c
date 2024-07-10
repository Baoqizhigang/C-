/*************************************************************************
题目地址：https://oj.haizeix.com/problem/237

> 这段代码实现了递归生成指定长度的全排列，并使用数组和标记数组来跟踪已使用的数字。
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

// 全局变量
int arr[10], vis[10] = { 0 }; // arr[10]：用于存储排列的元素。vis[10]：用于记录数字是否已被使用，初始化为 0。

// 打印数组 arr 中从索引 0 到 n-1 的元素。
void print_one_result(int n) {
    for (int i = 0; i < n; i++) { //for 循环从 0 遍历到 n-1。
        if (i) cout << " "; // 使用 cout 打印数组元素，i 不为 0 时，前面加空格。
        cout << arr[i];
    }
    cout << endl;
    return;
}

void f(int i, int n) { // i：当前数组索引。n：排列的长度
    if (i == n) { // 基准条件，当 i 等于 n 时，打印排列并返回。
        print_one_result(n);
        return;
    }
    // for 循环从 1 到 n。
    for (int k = 1; k <= n; k++) {
        if (vis[k]) continue; // 跳过已使用的数字。
        arr[i] = k; // 将 k 赋值给 arr[i]
        vis[k] = 1; // 标记 k 为已使用
        f(i + 1, n); // 递归调用 f(i + 1, n) 生成后续排列。
        vis[k] = 0; // 回溯时取消标记
    }
    return;
}

int main() {
    int n;
    cin >> n;
    f(0, n);
    return 0;
}
