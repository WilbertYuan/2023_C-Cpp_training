#include<stdio.h>
int a,b;
int fun(int b)
{
	b++;
	static int a = 0;
	a+=2;
	return a+b;
}
int main()
{
	b *= 10;
	printf("%d ", b);
	for (;;b++)
	{
		a += fun(b);
		if (a > 5) break;
	}
	printf("%d %d",a,b);
	return 0;
}