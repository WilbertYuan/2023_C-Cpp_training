#include<iostream>
#include<algorithm>

//void exchange(int64_t & a, int64_t & b)
//{
//	a ^= b ^= a ^= b;
//}
//
//int main()
//{
//	using namespace std;
//	long long s = 414231412343421440;
//	int64_t a = 0;
//	cin >> a;
//	a =(a ^ (a >> 63)) - (a >> 63);
//	cout << endl << a << endl;
//	swap(a, s);
//	exchange(a, s);
//	printf("%lld\n%lld\n", a,s);
//	return 0;
//}

int main()
{
	using namespace std;
	int64_t a1,a2;
	cout << "input two numbers:" << endl;
	cin >> a1 >> a2;
	for (int64_t a = a1; a <= a2; a++)
	{
		int32_t num, num1 = 0, num0 = 0;
		for (int i = 0; i < 63; i++)
		{
			if ((a >> i) & 1) num = i + 1;
		}
		int* p = (int*)malloc(sizeof(int64_t) * (num));
		int* q = p;
		for (int i = 0; i < num; i++)
		{
			*(p) = ((a >> i) & 1);
			if ((a >> i) & 1) num1++; else { num0++; }
			p++;
		}
		p--;
		for (p; p >= q; p--)
		{
			cout << *(p);
		}
		cout << " " << num1 << " " << num0 << endl;
		/*p = q;
		free(p);*/
		//free(q);
	}
	
	return 0;
}