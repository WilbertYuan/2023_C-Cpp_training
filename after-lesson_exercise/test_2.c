//2、编写一个程序，定义一个长度为10的一维数组，数组元素值是在[20, 100]区间内产生的随机整数，
//生成元素值后在屏幕输出，并用函数求出该数组元素的平均值和最小值。
//求数组元素平均值的函数原型：double average(int a[], int n);
//求数组元素最小值的函数原型：int minnum(int a[], int n);

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double average(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum * 1.0 / 10;
}

int minnum(int arr[], int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
/*
Anti-copy_code_made_by_yhk_2424
*/
int main()
{
	int arr[10] = { 0 };
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 81 + 20;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", i + 1);
	}
	printf("\n\n\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n\n\n");
	printf("average num is %.1lf\n\n", average(arr, 10));
	printf("min num is %d\n", minnum(arr, 10));
	return 0;
}
