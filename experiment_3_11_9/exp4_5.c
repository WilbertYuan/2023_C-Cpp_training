

/*ʵ����Ŀ��2������ʵ��̲�ʵ���ĵ���Ŀ5���������exp4_5.c����֤��°ͺղ��룺2000���ڵ���ż����������2�����ܹ��ֽ�Ϊ��������֮�͡�
���㷨��ʾ���������ֽ�Ϊ����������Ȼ���ж������Ƿ��Ϊ���������ǣ����������Ⲣ������������½��зֽ���жϡ�
���У��ж�һ�������Ƿ�Ϊ�������ú���ʵ�֡�ÿ��ż��ֻҪ�õ�һ�ַֽ��ֹͣ������Ҫ�����ż����������������ϣ���*/

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