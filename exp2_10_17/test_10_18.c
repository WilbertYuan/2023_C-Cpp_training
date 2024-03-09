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

int Max(int x, int y)                   //10 18 到徐天宇宿舍敲的代码，关于scanf_s扫描变量之间的“，”后输出大的负数问题。
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
	scanf_s("%d%d", &num1, &num2);                //这里变量间输入了“，”会怎么样？
	max = Max(num1, num2);
	printf("%d",max);
	return 0;
}

