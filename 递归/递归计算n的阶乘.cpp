#include<iostream>
using namespace std;

int factorial(int a)
{
	int sum = 0;
	if (a == 0)
		return 1;
	if (a > 0)
	{
		sum = a * factorial(a - 1);
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}