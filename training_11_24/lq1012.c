//����һ�����У�ÿ��ѯ�������е�l��������r�����е�K��������ĸ���
//
//�����ʽ
//�������� :
//��һ�а���һ����n����ʾ���г��ȡ�
//
//�ڶ��а���n������������ʾ���������С�
//
//����������һ��������m����ʾѯ�ʸ�����
//
//������m�У�ÿ��������l, r, K����ʾѯ�����д������ҵ�l��������r�����У��Ӵ���С��K��������ĸ�������Ԫ�ش�1��ʼ��š�
//�������� :
//5
//1 2 3 4 5
//2
//1 5 2
//2 3 2
//�����ʽ
//
//������� :
//�ܹ����m�У�ÿ��һ��������ʾѯ�ʵĴ𰸡�
//������� :
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