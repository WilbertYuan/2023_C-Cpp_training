#include<stdio.h>
int main()
{
	int m = 2, n = 2, p = 1;
	switch (m)
	{
	case 1:
		switch (n)
		{
		case 1: n++; break;
		case 2: n++; break;
		case 3: p++; break;
		}break;
	case 2:
		switch (n)
		{
		case 1: n++; break;
		case 2: n++; break;
		case 3: p++; break;
		}
	case 3:
		switch (n)
		{
		case 1: n++; break;
		case 2: n++; break;
		case 3: p++; break;
		}
	case 4:
		switch (n)
		{
		case 1: n++; break;
		case 2: n++; break;
		case 3: p++; break;
		}break;
	default:
		m++;
	}
	printf("%d %d %d", m, n, p);
}