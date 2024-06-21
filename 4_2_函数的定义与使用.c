/*************************************************************************
    > select_function 函数: double select_function(int flag, double x)
    作用：根据 flag 的值，选择不同的函数操作并返回结果。
    参数：flag 是整型变量，用于选择操作；x 是双精度浮点型变量。
    返回值：返回不同操作的结果，取决于 flag 的值。
    逻辑：
        switch (flag)：根据 flag 的值执行不同的分支。
        case 1：返回 sqrt(x)，即 x 的平方根。
        case 2：返回 x * x，即 x 的平方。
        default：打印错误信息 error flag，并跳出 switch 语句。

    > print_hello_world 函数 : void print_hello_world(int n)
    作用：打印 n 次 "hello world"。
    参数：n 是整型变量，表示打印次数。
    逻辑: 使用 for 循环从 0 到 n-1，每次循环打印 "hello world"。
 ************************************************************************/

#include <stdio.h>
#include <math.h> // 使用 math.h 库中的 sqrt 函数计算平方根。

int sum(int a, int b) {
    return a + b;
}

double select_function(int flag, double x) {
    switch (flag) { // 使用 switch 语句根据 flag 的值选择不同的操作，提高代码的灵活性和可扩展性。
    case 1: return sqrt(x);
    case 2: return x * x;
    default: printf("error flag\n"); break;
    }
    return 0;
}

void print_hello_world(int n) {
    for (int i = 0; i < n; i++) {
        printf("hello world\n");
    }
    return ;
}

int main() {
    printf("3 + 4 = %d\n", sum(3, 4));
    printf("sqrt(3) = %lf\n", select_function(1, 3));
    printf("4 * 4 = %lf\n", select_function(2, 4));
    print_hello_world(3);
    printf("____________");
    print_hello_world(8);
    return 0;
}
