#include <stdio.h>

int main()
{
	printf("###############exp1_4 starts###############\n\n\n\t\tprice calculating:\n\n\n");
	const double pi = 3.1415926935;
	int price = 10;
	double radius, height, area, gross_price;
	printf("please input radius and height with at least accuracy of 1E-1:\t");
	scanf_s("%lf%lf", &radius, &height);
	//formula
	area = 2 * pi * radius * height + 2 * pi * radius *radius;
	gross_price = price * area;
	printf("\n\n\n\tthe gross area is %.2lf.\n\n\tthe gross price is %.2lf.\n\n\n", area, gross_price);

	return 0;
}