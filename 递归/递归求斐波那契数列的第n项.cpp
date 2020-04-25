#include<iostream>
using namespace std;

int Fib(int n)
{
	int i = 0;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n >= 2)
		i = Fib(n - 1) + Fib(n - 2);
	return i;
}

int main()
{
	int n;
	cin >> n;
	cout << Fib(n);
	return 0;
}