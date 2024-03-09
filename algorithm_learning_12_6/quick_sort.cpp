#include<iostream>
#include<algorithm>
using namespace std;
int n;
int q[1000010];
void quixk_sort(int q[], int l, int r)
{
	if (l >= r) return;
	int x = l + r >> 1, i = l - 1, j = r + 1;//在此处使用位运算的效率比仅使用第一个元素经行判断的效率更高。
	while (i < j)
	{
		do i++; while (q[i] < x);
		do j--; while (q[j] > x);
		if (i < j) swap(q[i], q[j]);
	}
	quixk_sort(q, l, j);
	quixk_sort(q, j + 1, r);
}
int main()
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) scanf_s("%d", &q[i]);
	quixk_sort(q, 0, n - 1);
	//sort(q, q + n);
	for (int i = 0; i < n; i++) printf("%d ", q[i]);
	return 0;
}


