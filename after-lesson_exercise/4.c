#include<stdio.h>
int main()
{
	double x;
	double s = 0;
	scanf_s("%lf", &x);//此处使用VS2022编译，对于scanf_s若有报错请将“_s”删去。下面程序不再提示。
	for (int i = 1;; i++)
	{
		double j = 1, k = 1;
		for (int l = 0; l < i; l++)
		{
			k *= x;
		}
		if (i % 2 == 1) j = 1.0 * k / (2 * i - 1);
		if (i % 2 == 0) j = -1.0 * k / (2 * i - 1);
		s += j;
		if (j < 1E-4) break;
	}
	printf("%.2lf", s);
	//Anti-copy_code_coded_by_yhk_2424

	return 0;
}