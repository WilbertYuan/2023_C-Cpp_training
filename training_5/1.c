#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int flag = 1;
	long long num = 0,m0,m1,sum = 0;
	int a = scanf("%lld%lld%lld", &num,&m0,&m1);
	long long min = m0 < m1 ? m0 : m1;
	long long* p = (long long*)malloc(num * sizeof(long long));
	for (long long i = 0; i < num; i++)
	{
		a = scanf("%lld", p + i);
	}
	if (num % 2 == 0)
	{
		for (int i = 0; i < num / 2; i++)
		{
			if (*(p + i) + *(p + num - i - 1) == 4) sum += (min * 2);
			if ((*(p + i)) != (*(p + num - i - 1)))
			{
				if (*(p + i) + *(p + num - i - 1) == 2) sum += m0;
				if (*(p + i) + *(p + num - i - 1) == 3) sum += m1;
				if (*(p + i) + *(p + num - i - 1) == 1)
				{
					flag = 0;
					printf("%d", -1);
					break;
				}
			}
			
		}
	}
	if (num % 2 == 1)
	{
		for (int i = 0; i < (num +1)/ 2; i++)
		{
			if (i == (num - 1) / 2 && *(p+ (num - 1) / 2) == 2) sum += min;
			else
			{
				if (*(p + i) + *(p + num - i - 1) == 4) sum += (min * 2);
				if ((*(p + i)) != (*(p + num - i - 1)))
				{
					if (*(p + i) + *(p + num - i - 1) == 2) sum += m0;
					if (*(p + i) + *(p + num - i - 1) == 3) sum += m1;
					if (*(p + i) + *(p + num - i - 1) == 1)
					{
						flag = 0;
						printf("%d", -1);
						break;
					}
				}
			}
		}
	}
	if(flag == 1) printf("%lld", sum);
	free(p);
	
}