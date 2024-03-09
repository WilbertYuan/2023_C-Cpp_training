//3、编写程序将所有大于1小于整数m的非素数存入数组中，并统计非素数的个数，具体要求如下：arr[1000005]
// 
//1）自定义函数：int isPrime(int n);
//其功能是：判断n是否为素数，如果是素数返回1，否则返回0；
// 
//2）自定义函数：int fun(int m, int a[]);
//其功能是：将所有大于1小于整数m的非素数存入数组a中，并返回数组a中元素的个数。
// 
//3）main函数中定义了数组：int array[100];
//要求在main函数中读入m的值，调用自定义函数，使得array数组中存放题目要求的整数，
// 输出数组中所有的整数及整数个数。运行结果如下图所示：

#include <stdio.h>
int isPrime_yhk(int n)
{
	if (n <= 2) return n >= 2;
	for (int i = 2;; i++)
	{
		if (i * i > n) return 1;
		if (n % i == 0) return 0;
	}
}
/*
Anti-copy_code_coded_by_yhk_2424
*/
int fun(int m, int arr[])
{
	int num = 0;
	for (int i = 2; i < m; i++)
	{
		if (!isPrime_yhk(i))
		{
			arr[num] = i;
			num++;
		}
	}
	return num;
		
}
int main()
{
	int arr[10000],m;
	printf("Please input m:\n");
	scanf_s("%d", &m);
	int num = fun(m, arr);
	printf("\n\n");
	for (int i = 0; i < num; i++)
	{
		if ((i + 1) % 5 == 1) printf("\t\t\t\t");
		printf("%d\t", arr[i]);
		if ((i + 1) % 5 == 0) printf("\n\n\n");
	}
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t%d numbers in all\n\n\n\n", num);
	//Anti-copy_code_coded_by_yhk_2424
	return 0;
}