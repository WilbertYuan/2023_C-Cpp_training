//1����дһ�����򣬼��㲢�������֮��s��ֵ��
//
//Ҫ�� �� �Ӽ�������ʵ��x������s��ֵ��ֱ�����һ��ľ���ֵС��10 - 4��������������� ����������2λС������ ��ʹ��pow������
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