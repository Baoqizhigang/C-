/*************************************************************************
	> 这段代码主要用于定义一些用于排序测试的函数和宏。
	它包含了生成随机数组、检查数组是否有序、交换两个变量的宏、以及测试排序函数的宏。
	同时，使用了 GCC 特性在程序启动时自动初始化随机数生成器。
	这些代码片段展示了如何使用 C 的标准库和预处理器宏来简化测试排序算法的过程。
 ************************************************************************/

// 作用：防止头文件的重复包含，避免编译时的重复定义错误
#ifndef _SORT_TEST_H // 如果未定义宏 _SORT_TEST_H，则继续执行下面的代码
#define _SORT_TEST_H // 定义宏 _SORT_TEST_H
tring.h>
#include <time.h> // 包含标准时间库 <time.h>，提供时间处理函数，如 clock 和 srand。

// 定义两个常量，用于表示小数据集和大数据集的大小。
#define SMALL_DATA_N 5000 // 小数据集大小，5000
#define BIG_DATA_N   5000000 // 大数据集大小，5000000

// 构造函数属性
__attribute__((constructor)) // GCC 扩展，用于标记函数在程序开始执行前自动调用。
void __init_Rand__() { // 定义初始化随机数种子的函数。
	printf("inti rand\n"); // 打印初始化信息
	srand(time(0)) //使用当前时间作为种子初始化随机数生成器。
}

// 检查数组是否有序的函数
bool check(int *arr, int l, int r) { // int *arr：指向数组的指针。int l：数组左边界（包含）。int r：数组右边界（不包含)
	for (int i = l + 1, i < r; i++) {
		if (arr[i] < arr[i - 1]) return false; //如果有序，返回 true；否则，返回 false
	}
	return true;
}

// 生成随机数组的函数。
int* getRandData(int n) { // int n：数组大小
	int *arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) arr[i] = rand() % 10000;
	return arr; // 返回值：指向生成的随机数组的指针
}

// 定义交换两个变量的宏
#define swap(a, b) { \
	__typeof(a)__c = a; \ // 获取变量 a 的类型，并定义临时变量 __c
	a = b, b = __c; \ // 交换 a 和 b 的值
}

// 定义测试排序函数的宏
#define TEST(func, arr, n){ \
	printf("Test %s :", #func); \ // 打印测试的函数名
	int *temp = (int *)malloc(sizeof(int) * n); \ // 分配临时数组 temp
	memcpy(temp, arr, sizeof(int) * n); \ // 将原数组内容复制到 temp
	long long b = clock(); \ // 记录起始时间
	func(temp, 0, n); \ // 调用排序函数
	long long e = clock(); \ // 记录结束时间
	if (check(temp, 0, n)) { \ // 检查数组是否有序
		printf("\tOK"); \  // 有序：打印 OK
	} else { \
		printf("Failed"); \ // 无序：打印 "Failed"
	} \
	printf(" %ditems %lldms\n", n, (e - b) * 1000 / CLOCKS_PER_SEC); \ // 打印排序的元素数量和耗时。
	free(temp); \ // 释放临时数组 temp。
}

#endif // 结束头文件保护，防止重复包含
#include <s
