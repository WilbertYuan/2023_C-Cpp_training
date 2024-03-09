#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>//printf();

#include <string.h>//strlen(); strcmp();

#include<Windows.h>//Sleep();

#include <stdlib.h>//system("");
//关机 system("shutdowm  -s -t")  取消system("shutdowm -a")

#include<math.h>//sqrt()

#include<stdlib.h>//rand

#include<time.h>//time ----srand((unsigned int)time(NULL));

//#include "game.h"

int f1(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}


int main()
{
	int i = 0;
	printf(i);
	return 0;
}