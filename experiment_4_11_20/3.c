//��д����exp5_6.c�����жϻ�ƿ��˭����ġ���ʦ��ƿ���ˣ��༶ֻ���ĸ�Сͬѧ����ʦѯ��Сͬѧ����֪������1�˴���ģ���֪��4����ÿ����Ҫô�ǳ�ʵ�ģ�Ҫô����˵�ѵġ�
//Сͬѧ�ش���ʦ�������ǣ�
//��˵������û�д��飬�Ƕ�����ġ���
//��˵������û�д��飬�Ǳ�����ġ���
//��˵������û�д��飬���Ҵ���ġ���
//��˵������û�д��顣��
//�������˻ش��ж�˭�����˻�ƿ��
#include<stdio.h>
int a, b, c, d;
void restart()
{
	if (b == 2) b = 1;
	if (c == 2) c = 1;
	if (d == 2) d = 1;
}
int main()
{
	int tf[4] = { -1,-1,-1,-1 };
	int test[4] = { -1,-1,-1,-1 };
	int ans[4][4] = { -1,1,-1,0, -1,1,0,-1, 1,0,-1,-1, 1,-1,-1,-1 };
	int active = 0;
	
	for (a = 0; a < 2; a++)
	{
		if (a)
			tf[0] = 1;
		else 
			tf[0] = 0;

		
		for (b = 0; b < 2; b++)
		{
			//if (active) break;
			if (b)
				tf[1] = 1;
			else
				tf[1] = 0;

			//restart();
			for (c = 0; c < 2; c++)
			{
				//if (active) break;
				if (c)
					tf[2] = 1;
				else
					tf[2] = 0;

				//restart();
				for (d = 0; d < 2; d++)
				{
					//if (active) break;
					if (d)
						tf[3] = 1;
					else
						tf[3] = 0;
					active = 0;
					for (int i = 0; i < 4; i++)//i stands for different people
					{
						//if (active) break;
						for (int j = 0; j < 4; j++)//j stands for opinions about different people
						{
							if (test[j] < 0 && tf[i] == 1) test[j] = ans[i][j];
							if (test[j] < 0 && tf[i] == 0)
							{
								if (ans[i][j] == 0) test[j] = 1;
								if (ans[i][j] == 1) test[j] = 0;
							}
							if (test[j] != ans[i][j] && tf[i] == 1 /*&& ans[i][j] != -1 && test[j] != -1*/)
							{
								active = 1;
								//printf("%d,%d,%d,%d\n", a, b, c, d);
							}
							if (test[j] == ans[i][j] && tf[i] == 0 /*&& ans[i][j] != -1 && test[j] != -1*/)
							{
								active = 1;
								//printf("%d,%d,%d,%d\n", a, b, c, d);
							}
							/*else if (test[j] != ans[i][j] && tf[i] == 0)
							{
								continue;
							}*/
						}
					}
					for (int i = 0; i < 4; i++)
					{
						tf[i] = -1;
						test[i] = -1;
					}
				    //tf[4] = { -1,-1,-1,-1 };
					//test[4] = { -1,-1,-1,-1 };
					//ans[4][4] = { -1,1,-1,0, -1,1,0,-1, 1,0,-1,-1, 1,-1,-1,-1 };
					if (active ==0) printf("%d,%d,%d,%d\n", a, b, c, d);
				}
				restart();
			}
			restart();
		}
		restart();
	}
	//printf("%d,%d,%d,%d", a, b, c, d);
	
	return 0;
}