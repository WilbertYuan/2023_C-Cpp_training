#include<stdio.h>

typedef struct Date
{
	int year;
	int month;
	int day;
}Date;

int ifdate(Date date)
{
	if (date.year > 0 && date.month > 0 && date.month < 13 && date.day>0 && date.day < 32)
	{
		switch (date.month)
		{
		case 1:
			return 1;
		case 2:
			if(date.year)
		}
	}
	else
	{
		return 0;
	}
}

int main()
{
	int flag = 0,i = 0;
	Date arr[1005];
	do
	{
		scanf("%d-%d-%d", &arr[i].year, &arr[i].month, &arr[i].day);
		if (ifdate(arr[i]))
		{
			flag = 1;
		}
		else
		{
			i++;
		}
	} while (flag == 0);
	return 0;
}