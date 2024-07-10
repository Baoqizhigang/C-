/*************************************************************************
题目地址：https://oj.haizeix.com/problem/235

> 递归和组合生成：该程序通过递归生成组合，展示了如何使用递归和数组来生成特定的数字组合。
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;


int arr[10];

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
