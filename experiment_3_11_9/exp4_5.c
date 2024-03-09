

/*实验题目（2）【见实验教材实验四的题目5】：编程序exp4_5.c，验证歌德巴赫猜想：2000以内的正偶数（不包括2）都能够分解为两个质数之和。
（算法提示：将整数分解为两个整数，然后判断它们是否均为质数。若是，则满足题意并输出；否则重新进行分解和判断。
其中，判断一个整数是否为质数采用函数实现。每个偶数只要得到一种分解就停止，不必要求出该偶数的所有质数和组合）。*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool JudgePrime(int number)
{
	if (number == 0 || number == 1)
		return false;
	else if (number == 2)
		return true;
	else 
		for (int i = 3; i < number; i++)
		{
			if (number % i == 0)
				return false;
		}
	return true;
}
int main()
{
	for (int i = 2; i <= 1000; i++)
	{
		for (int j = 3; j <= i * 2; j++)
		{
			int g = 0;
			if (JudgePrime(j) && JudgePrime(i * 2 - j))
			{
				printf("%-5d + %-5d\t", j, i * 2 - j);
				g++;
				if (g % 3 == 0)
					printf("\n");
				break;
			}
		}
	}
	return 0;
}