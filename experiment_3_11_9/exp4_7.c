/*ʵ����Ŀ��3������ʵ��̲�ʵ���ĵ���Ŀ7���������exp4_7.c���õݹ鷽��ʵ������������������Լ������������������Ƚϡ�*/
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