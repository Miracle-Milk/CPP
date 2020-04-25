#include<iostream>
using namespace std;

int input(int* p)
{
	cin >> *p;
	int n = 1;
	while (*p != 9999)
	{
		n++;
		if (n == 100)
		{
			break;
		}
		p++;
		cin >> *p;
	}
	return n;
}

void print(int* p, int n)
{
	if (n > 0)
	{
		cout << *p;
		p++;
		for (int i = 1; i < n-1; i++)
		{
			cout << " " << *p;
			p++;
		}
	}
}

int main()
{
	int a[100];
	int* p = a;
	int n = input(p);
	print(p, n);
	return 0;
}