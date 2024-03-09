//求1 + 2 + 3 + ... + n的值。
//
//输入格式
//输入描述 :
//输入包括一个整数n。
//输入样例 :
//4
//
//输出格式
//
//输出描述 :
//输出一行，包括一个整数，表示1 + 2 + 3 + ... + n的值。
//输出样例 :
//10

#include<stdio.h>
int main()
{
	long long a,sum= 0;
	scanf_s("%d", &a);
	for (long long i = 0; i < a; i++)
	{
		sum += (i + 1);
	}
	printf("%lld", sum);
	return 0;
}