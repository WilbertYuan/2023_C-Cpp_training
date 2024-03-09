#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE* p = fopen("C:\\Users\\17193\\Desktop\\test.txt","w");
	if (p == 0)
	{
		printf("error!");
		exit(1);
	}
	char strgroup[15][10];
	int i = 0;
	do 
	{
		gets(strgroup[i]);
		i++;
	} while (strcmp(strgroup[i],"#") != 0);
	for(int j = 0; j < i; j++)
	{
		fputs(strgroup[j],p);
		fputc('\n',p);
	}
	fclose(p);
	return 0;
}
