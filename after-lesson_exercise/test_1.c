//1、编写一个程序，计算并输出数列之和s的值，
//
//要求： ① 从键盘输入实数x，计算s的值，直到最后一项的绝对值小于10 - 4（不包括该项）；② 输出结果保留2位小数；③ 不使用pow函数。
//
#include<stdio.h>
int main()
{
	double x;
	double s = 0;
	scanf_s("%lf", &x);
	for (int i = 1;; i++)
	{
		double j = 1,k = 1;
		for (int l = 0; l < i; l++)
		{
			k *= x;
		}
		if (i % 2 == 1) j = 1.0 * k / (2 * i - 1);
		if (i % 2 == 0) j = -1.0 * k / (2 * i - 1);
		s += j;
		if (j < 1E-4) break;
	} 
	printf("%.2lf", s);
	return 0;
}