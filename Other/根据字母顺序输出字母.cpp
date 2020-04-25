#include<iostream>
using namespace std;

int main()
{
	int n, a[4];
	char b[4];
	cin >> n;
	for (int i = 0; i < 4; i++)
	{
		a[i] = n % 100;
		n = n / 100;
		b[i] = a[i] + 97;
	}
	for (int i = 3; i >= 0; i--)
	{
		cout << b[i];
	}
	return 0;
}