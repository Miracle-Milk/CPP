#include<iostream>
using namespace std;

int main()
{
	int a[20][20], max[20], i, j;
	cin >> i >> j;
	for (int k = 0; k < i; k++)
	{
		for (int u = 0; u < j; u++)
		{
			cin >> a[k][u];
		}
	}
	for (int k = 0; k < j; k++)
	{
		int tempmax = a[0][k];
		for (int u = 0;u < i; u++)
		{
			if (a[u][k] > tempmax)
				tempmax = a[u][k];
		}
		max[k] = tempmax;
	}
	for (int k = 0; k < j; k++)
	{
		if (k == j - 1)
			cout << max[k];
		else
			cout << max[k] << " ";
	}
	return 0;
}
