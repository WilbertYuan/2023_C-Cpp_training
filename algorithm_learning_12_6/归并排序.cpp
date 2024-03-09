#include <bits/stdc++.h>
using namespace std;

int q[1000010],tmp[1000010];

int n;

int merge_sort(int q[], int l, int r)
{
	if (l >= r) return 0;
	int mid = l + r >> 1;
	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
	int k = 0,i = 
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &q[i]);
	merge_sort
	return 0;
}