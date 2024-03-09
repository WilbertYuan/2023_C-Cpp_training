/*实验题目（3）【见实验教材实验四的题目7】：编程序exp4_7.c，用递归方法实现求解两个整数的最大公约数，并与迭代方法作比较。*/
#include<stdio.h>
int M(int a, int b)
{
	int k;
	k = a % b;
	if (k != 0)
	{
		M(b, k);
	}
	else
		return b;
}
int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d", M(a, b));
	return 0;
}