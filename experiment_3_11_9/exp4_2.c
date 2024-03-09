#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
/*实验题目（1）【见实验教材实验四的题目2】：编程序exp4_2.c，巧用函数调用，打印不同行数和字符构成的等腰三角形。
具体要求：定义一个函数原型void DrawTriangle (int n,char c); ，实现功能为打印一个n行的由字符c组成的等腰三角形。
主程序调用该函数，实现打印5行“ '* ' ”、10行
“ '# ' ”的等腰三角形。
实验解答：
①	 源程序exp4_2.c的代码是：
*/
void DrawTriangle(int n, char c)
{
	for (int i = 1; i <= 3 * n - 1; i += 2)
	{
		for (int j = 0; j <= (3 * n - 1 - i) / 2; j++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("%c",c);
		printf("\n");
		//for (int j = 0; j <= (2 * n - 1 - i) / 2; j++)
		//	printf(" ");

	}
}
int main()
{
	printf("input a string:\n");
	char c;
	c = getchar();
	printf("input a number:\n");
	int n;
	scanf_s("%d", &n);
	DrawTriangle(n, c);
	return 0;
}