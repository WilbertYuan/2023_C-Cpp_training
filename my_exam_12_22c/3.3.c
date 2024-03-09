#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
#include <string.h>  
#include <stdbool.h>  

#define MAX_WORDS 200  
#define MAX_WORD_LENGTH 25  

//int scanftext(char text[])
//{
//	int i = 0;
//	scanf("%s", &text[i]);
//	while (strcmp(text[i], "#end#"))
//	{
//		i++;
//		scanf("%s", &text[i]);
//	}
//	return i;
//}

int main()
{
	char text1[MAX_WORDS][MAX_WORD_LENGTH],text2[MAX_WORDS][MAX_WORD_LENGTH];
	int arr1[200] = { 1 }, arr2[200] = { 1 } ,num1 = 0,num2 = 0,min,flag = 0,flagold = 0;
	char word1[MAX_WORD_LENGTH]; //word2[MAX_WORD_LENGTH];
	//num1 = scanftext(text1);
	//num2 = scanftext(text2);
	// 输入第一篇文章
	printf("请输入第一篇文章（以#end#结束）：\n");
	while (scanf("%s", word1) && strcmp(word1, "#end#") != 0) {
		strcpy(text1[num1], word1);
		num1++;
	}

	// 输入第二篇文章
	printf("请输入第二篇文章（以#end#结束）：\n");
	while (scanf("%s",word1) && strcmp(word1, "#end#") != 0) {
		strcpy(text1[num1], word1);
		num2++;
	}

	for (int i = 0; i < num1; i++)
	{
		for (int j = 0; j < num2; i++)
		{
			if (!strcmp(text1[i], text2[j]))
			{
				arr1[i] = 0;
				arr2[j] = 0;
			}
		}
	}
	min = num1;// < num2 ? num1: num2;
	for (int i = 0; i < min - 1; i++)
	{
		if (arr1[i]) flag = 0;
		else
		{
			flag++;
		}
		if (flagold >= 5 && flag == 0)
		{
			for (int j = 0; j < flagold; j++)
			{
				printf("%s",text1[flagold - j]);
			}
		}
		flagold = flag;
	}
	return 0;
}