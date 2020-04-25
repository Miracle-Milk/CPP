#include<iostream>
using namespace std;

int fac(int a)
{
	int sum = 1;
	for (int i = 1; i <= a; i++)
	{
		sum = sum * i;
	}
	if (a == 0)
		sum = 1;
	return sum;
}

int main()
{
	int sum = 0 , n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += fac(i);
	}
	cout << sum;
	return 0;
}