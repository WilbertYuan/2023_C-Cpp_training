#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
/*ʵ����Ŀ��1������ʵ��̲�ʵ���ĵ���Ŀ2���������exp4_2.c�����ú������ã���ӡ��ͬ�������ַ����ɵĵ��������Ρ�
����Ҫ�󣺶���һ������ԭ��void DrawTriangle (int n,char c); ��ʵ�ֹ���Ϊ��ӡһ��n�е����ַ�c��ɵĵ��������Ρ�
��������øú�����ʵ�ִ�ӡ5�С� '* ' ����10��
�� '# ' ���ĵ��������Ρ�
ʵ����
��	 Դ����exp4_2.c�Ĵ����ǣ�
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