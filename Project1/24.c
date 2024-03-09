#include <stdio.h>
#include <math.h>
int JudgePrime(int n)
{
	int i, k;
	int judge = 1;
	if (n == 1)
		judge = 0;
	k = (int)sqrt((double)n);
	for (i = 2; judge && i <= k; i++)
		if (n % i == 0)
			judge = 0;
	return judge;
}
int main()
{
	int i, j, a;
	for (i = 2; i <= 200000; i += 2)
	{
		for (j = 1; j <= (i / 2); j += 1)
		{
			if (JudgePrime(j) != 0 && JudgePrime(i - j) != 0)
			{
				printf("%4d+%4d=%4d", j, i - j, i);
				if (i % 8 == 0)
					printf("\n");
				else
					printf(" ");
				break;
			}
			else
				j += 1;
		}
	}
	//scanf_s("%d", &a);
	return 0;
}