#include<stdio.h>
#include<math.h>
double f(double a)
{
    return a * a * a * a * a - 15 * a * a * a * a + 85 * a * a * a - 225 * a * a + 274 * a - 121;
}
int main()
{
    double max = 2.4, min = 1.5;
    double inp = 1.8;

    while (f(inp) < -1E-7 || f(inp) > 1E-7) 
    {

        if (f(inp) > 0)
        {
            min = inp;
        }
        else
        {
            max = inp;
        }
        inp = (max + min) / 2;

    }
    printf("%.6llf", inp);
    return 0;
}

