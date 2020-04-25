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
	int i;
	cin >> i;
	cout << fac(i);
	return 0;
}