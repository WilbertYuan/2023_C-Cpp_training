//��д����exp5_2.c������һ��3 * 3�ľ���Ҫ��ʵ�ֶ������
// ������󡢾���ת�á�����������Խ���Ԫ��֮�ͣ����й��ܾ�
// �����Ӻ���ʵ�֡�
#include<stdio.h>
#include<stdbool.h>
int arr[3][3] = { 0 };
bool input();
void output();
void trans();
int daig();

int main()
{
	printf("mattrix_changing\n\n\t0:exit\n\t1:input\n\t2:output\n\t3:trans\n\t4:daig\n\n");
	int flag = 0;
	do {
		printf("please input your command:");
		scanf_s("%d", &flag);
		switch (flag)
		{
		case 0:
			break;
		case 1:
			printf("please input 9 numbers as the mattrix:");
			if (input()) printf("finish\n");
			break;
		case 2:
			output();
			break;
		case 3:
			trans();
			printf("finish\n");
			break;
		case 4:
			printf("the diag number is %d \n", daig());
			break;
		default:
			printf("please reinput your command:");
			printf("mattrix_changing\n\n\t0:exit\n\t1:input\n\t2:output\n\t3:trans\n\t4:daig\n\n");
		}
	} while (flag != 0);
	return 0;
}
bool input()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	return true;
}
void output()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}
}
void trans()
{
	int tmp =0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			tmp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = tmp;
		}
		//printf("\n\n");
	}
}
int daig()
{
	return arr[0][0] + arr[1][1] + arr[2][2];
}