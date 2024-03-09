#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= abs(n + 1 - 2 * i); j++)
			printf(" ");
		for (int j = 1; j <= n - abs(n + 1 - 2 * i); j++)
			printf("* ");
		printf("\n");
	}
}