#include <stdio.h>
int main()
{
	long long num;
	scanf_s("%lld", &num);
	long long arra[100] = { 0 }, arrb[100] = { 0 }, ans[100] = { 0 };
	for (long long i = 0; i < num; i++)
	{
		scanf_s("%lld%lld", &arra[i], &arrb[i]);
		if (arrb[i] - arra[i] > 10)
		{
			ans[i] = 9;
			//printf("%d\n", 9);
			continue;
		}
		long long head,max = 0;
		for (int m = 1, j = 0;; m *= 10)
		{
			if (arrb[i] / m == 0)
			{
				head = arrb[i] / (m/10);
				break;
			}
			if (arrb[i] / m > max) max = arrb[i] / m;
			j++;
		}
		//printf("%lld\n", head);
		if (arra[i] % 10 + arrb[i] - arra[i] >= 10) ans[i] = 9;
		if (head > arra[i] % 10 + arrb[i] - arra[i]) ans[i] = head;
		if (head <= arra[i] % 10 + arrb[i] - arra[i]) ans[i] = arra[i] % 10 + arrb[i] - arra[i];
	}
	for (int i = 0; i < num; i++)
	{
		printf("%lld\n", ans[i]);
	}
	return 0;
}