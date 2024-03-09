#include<stdio.h>
int main()
{
	int arr[8][8] = { 0};
	int arr2[8];
	for (int i = 0; i < 8;i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i][j] != 1)
			{
				arr2[i] = j;
				arr[i][j] = 1;
				for (int s = 0; s < 8; s++)
				{
					arr[i][s] = 1;
					arr[s][j] = 1;
				}
				for (int k = 0,k < 9 - i;k++)
			}
		}
	}
	return 0;
}