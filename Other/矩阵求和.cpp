#include<iostream>
using namespace std;

int main()
{
	int n, g;
	double a[50][50], b[50][50], sum[50][50];
	cin >> n >> g;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < g; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < g; j++)
		{
			cin >> b[i][j];
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < g; j++)
		{
			if (j == g - 1)
				cout << sum[i][j];
			else
				cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}