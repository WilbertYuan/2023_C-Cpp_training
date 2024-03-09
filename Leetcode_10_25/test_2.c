#include<stdio.h>
#define n 20
int main()
{
    int x = 0;
    scanf_s("%d", &x);
    int ten_pow = 1;
    int num = 0;
    int zero = 0;
    int number = 0;
    int arr[n];
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        ten_pow = 1;
        for (int j = 1; j <= i; j++)
        {
            ten_pow *= 10;
        }
        num = x % ten_pow;
        ten_pow = 1;
        for (int k = 0; k < i-1; k++)
        { 
            ten_pow *= 10;
        }
        num = num / ten_pow;
        if (num != 0)
        {
            number += zero;
            zero = 0;
            number++;
        }
        else
            zero++;
        arr[i - 1] = num;
    }
    if (number % 2 == 0)
    {
        for (int s = 1; s <= number / 2; s++)
        {
            if (arr[s-1] == arr[number- s])
                result = 1;
            else
                result = 0;
            break;
        }
    }
    else
    {
        for (int l = 0; l <= (number - 1) / 2; l++)
        {
            if (arr[l] == arr[number - 1 - l])
                result = 1;
            else
                result = 0;
            break;

        }
    }
    printf("%d", result);
    //printf("%d", number);
    //printf("%d,%d,%d,%d,%d", arr[0],arr[1],arr[2],arr[3],arr[4]);
	return 0;
}