#include<stdio.h>
int* transbits(int n,int* p)
{
    for (; n != 0; n /= 2)
    {
        *p = n % 2;
        p++;
    }
    return p;
}
void printbits(int* p , int* q)
{
    do 
    {
        p--;
        printf("%d",*p);
    } while (p != q);
}
int main()
{
    int bits[32] = { 0 },num;
    scanf_s("%d",&num);
    int* p = bits,*q;
    q = p;
    printbits(transbits(num, p), q);
    return 0;
}