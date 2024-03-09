//3����д�������д���1С������m�ķ��������������У���ͳ�Ʒ������ĸ���������Ҫ�����£�arr[1000005]
// 
//1���Զ��庯����int isPrime(int n);
//�书���ǣ��ж�n�Ƿ�Ϊ�������������������1�����򷵻�0��
// 
//2���Զ��庯����int fun(int m, int a[]);
//�书���ǣ������д���1С������m�ķ�������������a�У�����������a��Ԫ�صĸ�����
// 
//3��main�����ж��������飺int array[100];
//Ҫ����main�����ж���m��ֵ�������Զ��庯����ʹ��array�����д����ĿҪ���������
// ������������е��������������������н������ͼ��ʾ��

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