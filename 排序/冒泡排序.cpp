#include<iostream>
using namespace std;

int main()
{
	int a[100] = {}, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int temp;
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << a[i] << " ";
		else
			cout << a[i];
	}
	return 0;
}