#include<iostream>
using namespace std;

void zero(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		p[i] = 0;
		p + 1;
	}
}

int main()
{
	int a[100] = {};
	int num;
	for (int i = 0; i < 100; i++)
	{
		int b;
		cin >> b;
		if (b != -1)
			a[i] = b;
		else
		{
			num = i;
			break;
		}
	}
	int* p = a;
	int n;
	cin >> n;
	zero(p, n);
	for (int i = 0; i < num; i++)
	{
		if (i != num - 1)
		{
			cout << a[i] << " ";
		}
		else
			cout << a[i];
	}
	return 0;
}