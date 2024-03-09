//实验题目（1）【见实验教材实验五的题目１】：编写程序exp5_1.
// c，在主函数中定义一维数组int array[10]，自定义以下函数：
// 输入数组元素，输出数组元素、求数组元素平均值、输出数组元素
// 最大值、输出数组元素最小值、查找某数值元素是否存在（若存
// 在，请输出下标）、给数组元素排序，要求在主函数中对各子函数
// 进行调用和测试。



#include<stdbool.h>
#include<stdio.h>
int real_num;
int want_enter_num;
int array[10];
bool input(int num);
void output();
int average();
int max();
int min();
bool if_number(int num);
int main()
{
	int flag = 0;
	int num = 0;
	printf("input your command:\n\n\t0:exit\n\t1:input\n\t2:output\n\t3:average\n\t4:max\n\t5:min\n\t6:if_number\n\n");
	do
	{
		printf("please input your command:");
		scanf_s("%d", &flag);
		switch (flag)
		{
		case 0:
			break;
		case 1:
			printf("the number of the numbers that you want to enter:");
			scanf_s("%d", &want_enter_num);
			if (input(want_enter_num))
			{
				printf("\t\t\t");
				printf("finish!\n");
			}
				
			else
			{
				printf("failed! the data has overflown!\n");
				printf("please reinput your command\n\n");
				printf("input your command:\n\n\t0:exit\n\t1:input\n\t2:output\n\t3:average\n\t4:max\n\t5:min\n\t6:if_number\n\n");
			}
			break;
		case 2:
			output();
			break;
		case 3:
			printf("\t\t\t");
			printf("the average number is %d\n",average());
			break;
		case 4:
			printf("\t\t\t");
			printf("the maximun number is %d\n", max());
			break;
		case 5:
			printf("\t\t\t");
			printf("the minimun number is %d\n", min());
			break;
		case 6:
			printf("\t\t\t");
			printf("\nplease enter the number you want to justify:");
			scanf_s("%d", &num);
			if (if_number(num))
			{
				printf("\t\t\t");
				printf("exist!\n");
			}
			else
				printf("failed!\n");
			break;
		default:
			printf("please reinput your command\n\n");
			printf("input your command:\n\n\t0:exit\n\t1:input\n\t2:output\n\t3:average\n\t4:max\n\t5:min\n\t6:if_number\n\n");
		}
	} while (flag != 0);
	return 0;
}



void output()
{
	for (int i = 0; i < real_num; i++)
	{
		printf("%d\t", i + 1);
	}
	printf("\n");
	for (int i = 0; i < real_num; i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
}
int average()
{
	int sum =0;
	for (int i = 0; i < real_num; i++)
	{
		sum += array[i];
	}
	return sum / real_num;
}
int max()
{
	int max = array[0];
	for (int i = 0; i < real_num; i++)
	{
		if (array[i] > max) max = array[i];
	}
	return max;
}
int min()
{
	int max = array[0];
	for (int i = 0; i < real_num; i++)
	{
		if (array[i] < max) max = array[i];
	}
	return max;
}
bool input(int num)
{
	if (num > 10 - real_num)
		return false;
	else
	{
		printf("please enter your number(s):");
		for (int i = 0; i < num; i++)
		{
			scanf_s("%d", &array[real_num]);
			real_num++;
		}
		return true;
	}
}
bool if_number(int num)
{
	for (int i = 0; i < real_num; i++)
	{
		if (array[i] = num) return true;
	} 
	return false;
}