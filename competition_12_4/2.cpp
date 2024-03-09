#include<iostream>
int main()
{
	using namespace std;
	int num , m , k , min = 10000;
	int** p;
	//int* q;
	cin >> num;
	p = (int**)malloc(num * sizeof(int*));
	if (p == NULL)
	{
		cout << "Invalid value!" << endl;
		exit(1);
	}
	for (int i = 0; i < num; i++)
	{
		p[i] = (int*)malloc(num * sizeof(int));
		if (p[i] == NULL)
		{
			cout << "Invalid value!" << endl;
			exit(1);
		}
	}
	cin >> m >> k;
	int arr[1000] = { 0 };
	//if (arr == NULL) cout << "Invalid value!" << endl;
	for (int i = 0; i < m; i++)
	{
		int c, r ,dis;
		cin >> c >> r >> dis;
		p[c][r] = dis;
		p[r][c] = dis;
	}

	for (int i = 0; i < k; i++)
	{
		int s;
		cin >> s;
		arr[i] = s;
	}

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (p[arr[i]][j] != 0 && min > p[arr[i]][j]) min = p[arr[i]][j];
		}
	}

	if (min == 10000) cout << "-1";
	else 
	{
		cout << min;
	}
	free(p);
	return 0;
}