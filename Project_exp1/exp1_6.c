#include <stdio.h>
int main()
{
	printf("############## exp1_4 starts ##############\n\n\n\t\tnumber reversing\n\n\n");
	int a,a1,a2,a3,b = 0;
	printf("please input a number ranking from 100 to 999:\t");
	scanf_s("%d", &a);
	if (a >= 100 && a <= 999)
	{
		a1 = a / 100;
		a2 = a / 10 % 10;
		a3 = a % 10;
		b = a3 * 100 + a2 * 10 + a1;
		printf("\n\n\nthe reversed number is %d.", b);
		printf("\n\n\n###################  end! #################\n\n\n");
	}
	else
	{
		printf("\n\n\n################## error! #################\n\n\n");
	}
	return 0;
}