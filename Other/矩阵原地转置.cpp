#include<iostream>
using namespace std;

int main()
{
	int n, i = 0, j = 0;
	int a[10][10];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	int temp;
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j != n - 1)
				cout << a[i][j] << " ";
			else
				cout << a[i][j] << endl;
		}
	}
	return 0;
}