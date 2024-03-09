//#include<bits/stdc++.h>
#include<iostream>
int q[1000010], n;
using namespace std;
void qsort(int q[], int l, int r)
{
    if (l >= r) return;
    int x = q[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        do i++; while (q[i] < x);
        do j--; while (x < q[j]);
        if (i < j) swap(q[i], q[j]);
    }
    qsort(q, l, j);
    qsort(q, j + 1, r);
}
int main()
{
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) scanf_s("%d", &q[i]);
    qsort(q, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", q[i]);
    return 0;
}
