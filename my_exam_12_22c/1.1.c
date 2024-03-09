#include<stdio.h>

void fun1(int a, int* b);
void fun2(int* a, int b);

int main()
{
	int a = 2, b = 3;
	fun1(a, &b);
	printf("%d %d",a,b);
	return 0;
}

void fun1(int a, int* b)
{
	int tmp = a;
	a = *b;
	*b = tmp;
	fun2(b, a);
}

void fun2(int* a, int b)
{
	b *= *a;
	*a += b;
	printf("%d ",b);
}
