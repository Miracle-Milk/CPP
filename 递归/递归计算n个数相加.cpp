#include<iostream>
using namespace std;

int sum(int a)
{
	int i = a;
	if (a == 0)
		return 0;
	if (a > 1)
	{
		i = sum(a - 1) + i;
	}
	return i;
}

int main()
{
	int n;
	cin >> n;
	cout << sum(n);
	return 0;
}