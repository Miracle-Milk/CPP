#include<iostream>
using namespace std;

int max(int a[], int num)
{
	int m = a[num];
	if (num == 0)
		return a[num];
	if (m < max(a, num - 1))
		m = max(a, num - 1);
	return m;
}

int main()
{
	int n;
	int a[100] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << max(a, n - 1);
	return 0;
}