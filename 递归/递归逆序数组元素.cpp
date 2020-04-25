#include<iostream>
using namespace std;

void Fun(int a[], int i, int e)
{
	if (i == e || i > e)
		return;
	else
	{
		int temp;
		temp = a[e];
		a[e] = a[i];
		a[i] = temp;
		Fun(a, i + 1, e - 1);
	}
	return;
}

int main()
{
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	Fun(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << a[i] << " ";
		else
			cout << a[i];
	}
	return 0;
}