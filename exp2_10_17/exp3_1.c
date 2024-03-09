#include<stdio.h>
int main()
{
    double s = 1;
    int k = 2;
    int j = 1;
    for (int i = 1; i <= 500; i++)
    {
        s += (k*1.0 / j);
        k += j;
        j = k - j;
        s -= (k*1.0 / j);
        k += j;
        j = k - j;
        
    }
    printf("%lf", s-1);
    return 0;
}