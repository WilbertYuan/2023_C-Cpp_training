//2����дһ�����򣬶���һ������Ϊ10��һά���飬����Ԫ��ֵ����[20, 100]�����ڲ��������������
//����Ԫ��ֵ������Ļ��������ú������������Ԫ�ص�ƽ��ֵ����Сֵ��
//������Ԫ��ƽ��ֵ�ĺ���ԭ�ͣ�double average(int a[], int n);
//������Ԫ����Сֵ�ĺ���ԭ�ͣ�int minnum(int a[], int n);

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
