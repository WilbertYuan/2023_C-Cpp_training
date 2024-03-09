#include<iostream>
int main()
{
	using namespace std;
	union sast
	{
		int32_t a, b, c;
		int64_t d, e, f, arr[123];
	};
	sast a;
	cin >> sast.a;
	cout << endl << sast.a;

	return 0;
}
