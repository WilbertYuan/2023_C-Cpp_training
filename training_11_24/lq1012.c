//给定一个序列，每次询问序列中第l个数到第r个数中第K大的数是哪个。
//
//输入格式
//输入描述 :
//第一行包含一个数n，表示序列长度。
//
//第二行包含n个正整数，表示给定的序列。
//
//第三个包含一个正整数m，表示询问个数。
//
//接下来m行，每行三个数l, r, K，表示询问序列从左往右第l个数到第r个数中，从大往小第K大的数是哪个。序列元素从1开始标号。
//输入样例 :
//5
//1 2 3 4 5
//2
//1 5 2
//2 3 2
//输出格式
//
//输出描述 :
//总共输出m行，每行一个数，表示询问的答案。
//输出样例 :
//4
//2
#include<stdio.h>
int main()
{
	int arr[10005] = { 0 }, arr_[10005] = { 0 };
	int arr2[10005] = { 0 };
	int lo, quest, l, r, k, max;
	int max_num =0;
	scanf_s("%d", &lo);
	for (int i = 0; i < lo; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &quest);
	for (int i = 0; i < quest; i++)
	{
		scanf_s("%d", &l);
		scanf_s("%d", &r);
		scanf_s("%d", &k);
		for (int j = 0; j < lo; j++)
		{
			arr_[j] = arr[j];
		}
		int j = l - 1;
		max = -1000;
		for (int e = 0; e < k; e++)
		{
			for (int m = 1; m <= r - l; m++)
			{
				if (arr_[j + m - 1] > max)
				{
					max = arr_[j + m - 1];
					max_num = j + m - 1;
				}
			}
			arr_[max_num] = -1000;
		}
		arr2[i] = arr[max_num];
	}
	for (int i = 0; i < quest; i++)
	{
		printf("%d\n", arr2[i]);
	}
	return 0;
}