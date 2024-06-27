/*************************************************************************
	> 命令行参数传递 :
	在程序启动时，操作系统将命令行参数传递给 main 函数。
	argc 表示参数的数量，argv 是一个指针数组，每个元素指向一个参数字符串。

	> 字符串比较：
	strcmp 函数用于比较两个字符串，返回值为 0 表示字符串相等，不为 0 表示字符串不相等。
 ************************************************************************/

#include <stdio.h> // 包含标准输入输出库，提供 printf 函数。
#include <string.h> // 包含字符串处理库，提供 strcmp 函数

int main(int argc, char *argv[]) {// int argc：表示命令行参数的数量。char *argv[]：是一个数组，存储命令行参数的字符串。
	// 检查程序的名称是否为 ./bilibili,  != 0：如果两者不相等，则打印错误信息并退出程序
	if (strcmp(argv[0], "./bilibili") != 0) { // argv[0]：通常是程序的名称或路径。
		printf("wrong call, please call : ./bilibili\n");
		return 0;
	} 
	// 正确调用的处理
	printf("right call\n");
	printf("argc = %d\n", argc); // 打印参数数量
	//遍历并打印所有命令行参数。
	for (int i = 0; i < argc; i++) { 
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return 0;
}
