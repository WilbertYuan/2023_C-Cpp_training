#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    scanf_s("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);
    double s = 1;
    int k = 2;
    int j = 1;
    for (int i = 1; i <= n1/2; i++)
    {
        s += (k * 1.0 / j);
        k += j;
        j = k - j;
        s -= (k * 1.0 / j);
        k += j;
        j = k - j;
    }
    printf("%lf", s - 1);
    s = 1;
    k = 2;
    j = 1;
    for (int i = 1; i <= n2 / 2; i++)
    {
        s += (k * 1.0 / j);
        k += j;
        j = k - j;
        s -= (k * 1.0 / j);
        k += j;
        j = k - j;

    }
    printf("%lf", s - 1);
    s = 1;
    k = 2;
    j = 1;
    for (int i = 1; i <= n3 / 2; i++)
    {
        s += (k * 1.0 / j);
        k += j;
        j = k - j;
        s -= (k * 1.0 / j);
        k += j;
        j = k - j;

    }
    printf("%lf", s - 1);
    s = 1;
    k = 2;
    j = 1;
    for (int i = 1; i <= n4 / 2; i++)
    {
        s += (k * 1.0 / j);
        k += j;
        j = k - j;
        s -= (k * 1.0 / j);
        k += j;
        j = k - j;

    }
    printf("%lf", s - 1);
    s = 1;
    k = 2;
    j = 1;
    for (int i = 1; i <= n5 / 2; i++)
    {
        s += (k * 1.0 / j);
        k += j;
        j = k - j;
        s -= (k * 1.0 / j);
        k += j;
        j = k - j;

    }
    printf("%lf", s - 1);
    s = 1;
    k = 2;
    j = 1;
    return 0;
}