#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>//printf();

#include <string.h>//strlen(); strcmp();

#include<Windows.h>//Sleep();

#include <stdlib.h>//system("");
//�ػ� system("shutdowm  -s -t")  ȡ��system("shutdowm -a")

#include<math.h>//sqrt()

#include<stdlib.h>//rand

#include<time.h>//time ----srand((unsigned int)time(NULL));

//#include "game.h"

int Max(int x, int y)                   //10 18 �������������õĴ��룬����scanf_sɨ�����֮��ġ������������ĸ������⡣
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1, num2;
	int max =0;
	scanf_s("%d%d", &num1, &num2);                //��������������ˡ���������ô����
	max = Max(num1, num2);
	printf("%d",max);
	return 0;
}

