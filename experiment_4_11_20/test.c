#include<stdio.h>
#define N 10
void printfarray(int a[])//打印array
{
    printf("the elements are:\n");
    for (int i = 0; i < N; i++)
        printf("%5d", a[i]);
    printf("\n");
}
int maxnum(int a[])//找出最大值
{
    int max = a[0];
    for (int i = 1; i < N; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
int minnum(int a[])//找出最小值
{
    int min = a[0];
    for (int i = 1; i < N; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}
double averagenum(int a[])//求平均
{
    int b = 0;
    for (int i = 0; i < N; i++)
        b += a[i];
    double average = b / N;
    return average;
}
void find(int a[], int x)
{
    int i = 0;
    while (i < N)
    {
        if (x == a[i])
            printf("value=%d,index=%d\n", x, i);
        i++;
    }
}
void changearray(int a[])//排序
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j > i; j--)
            if (a[j] < a[j - 1])
            {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
}
int main()
{
    int array[N], x;

    printf("please input %d elements", N);
    for (int i = 0; i < N; i++)
        scanf_s("%d", &array[i]);
    printfarray(array);
    int max = maxnum(array);
    int min = minnum(array);
    double average = averagenum(array);
    printf("please input x be searched:\n");
    scanf_s("%d", &x);
    find(array, x);
    changearray(array);
    printfarray(array);
    return 0;
}