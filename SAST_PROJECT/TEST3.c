#include <stdio.h>

const int N = 10005;

int n, a[N];

int main()
{
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}