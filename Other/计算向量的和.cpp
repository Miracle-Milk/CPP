#include<iostream>
using namespace std;

int main()
{
	int a[2][100], n, b[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[0][i];
		b[i] = a[0][i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a[1][i];
		b[i] += a[1][i];
	}
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			cout << b[i];
		else
			cout << b[i] << " ";
	}
	return 0;
}