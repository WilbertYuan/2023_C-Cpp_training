#include<stdio.h>
#include<math.h>
int JudgePrime(int num)
{
	int i = 2;
	if (num <= 1)
		return 0;
	if (num == 2)
		return 1;
	for (; i <= (int)sqrt(num); i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}

int main()
{

	int input = 0;
	int end = 0;
	scanf_s("%d%d", &input, &end);
	do
	{
		if (JudgePrime(input))
			printf("%d\n", input);
		input++;
	} while (input <= end);
	return 0;
}


