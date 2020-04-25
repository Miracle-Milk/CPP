#include<iostream>
using namespace std;

int main()
{
	int a[2][100], n, b[100], sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[0][i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a[1][i];
		b[i] = a[0][i] * a[1][i];
		sum += b[i];
	}
	cout << sum;
	return 0;
}