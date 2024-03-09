#include<stdio.h>
//#include<math.h>
int main()

{
	printf("############## exp2_6 starts ##############\n\n\n\ttriangle experiment\n\n\n");
	double a, b, c, max, med, min;
	printf("### please input three edges of a triangle:\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	med = (a > b ? a : b);
	max = (med > c ? med : c);
	med = (a < b ? a : b);
	min = (med < c ? med : c);
	med = a + b + c - max - min;
	if (med + min <= max)
	{
		printf("The given data can't make a triangle !\n\n\n");
	}
	else if (max - min < 1E-7)
	{
		printf("the triangle with three identical edges\n\n\n");
	}
	else if (min * min + med * med - max * max < 1E-7 && min * min + med * med - max * max > -1E-7)
	{
		printf("the right triangle");
		if (min == med)
		{
			printf(" with two identical edges !\n\n\n");
		}
	}
	else if (med - min <1E-7|| max - med <1E-7)
	{
		printf("the triangle with two identical edges\n\n\n");
	}
	else
	{
		printf("the general triangle");
	}
	printf("max\t%lf\nmin\t%lf\nmed\t%lf\n", max, min, med);
	return 0;
}