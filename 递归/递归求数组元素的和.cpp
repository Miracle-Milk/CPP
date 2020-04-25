#include<iostream>
using namespace std;

int sum(int a[], int num)
{
	if (num == 0)
		return a[num];
	int i = a[num];
	i += sum(a,num - 1);
	return i;
}

int main()
{
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (n == 0)
		cout << 0;
	else
		cout << sum(a, n - 1);
	return 0;
}