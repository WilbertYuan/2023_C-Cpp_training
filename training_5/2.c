#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	typedef struct two
	{
		long long a;
		long long b;
	}two;
	long long n, m,maxunit = 0;
	scanf("%lld%lld", &n, &m);
	long long* p = (long long*)malloc(n * sizeof(long long));
	long long max100 = n / 100 + 1;
	long long* s = (long long*)malloc(max100 * sizeof(long long));
	two* q = (two*)malloc(m * sizeof(two));
	for (long long i = 0; i < n; i++)
	{
		scanf("%lld", p + i);
	}
	for (long long i = 0; i < m; i++)
	{
		scanf("%lld%lld", &q[i].a, &q[i].b);
	}
	for (long long i = 0; i < max100; i++)
	{
		maxunit = -100000;
		for (long long j = i * 100; j < (i + 1) * 100; j++)
		{
			
			if (*(p + j) > max) max = *(p + j);
		}
		s[i] = maxunit;
	}
	for (long long i = 0; i < (m/100 - 1); i++)
	{
		long long max = -100000;
		for (long long j = q[i].a - 1; j < q[i].b; j++)
		{
			if (*(p + j) > max)
			{
				max = *(p + j);
			}
		}
		printf("%lld\n", max);
	}
	free(q);
	free(s);
	free(q);
	return 0;
}