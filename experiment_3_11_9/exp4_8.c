//实验题目（4）【见实验教材实验四的题目8】：用调试器观察程序exp4_8.c的运行过程，
// 并记录各种变量在每一步执行时的变化情况，
// 在表格中填写每一个跟踪步每个变量对应的值。程序代码如下。
#include <stdio.h>
int a = 1;
int f(int a)
{
    auto int b = 2;
    static int c = 3;
    a = a + 1;
    b = b + 1;
    c = c + 1;
    return (a + b + c);
}

int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        a = a + 2;
        printf("%d \n", f(a));
    }
    return 0;
}