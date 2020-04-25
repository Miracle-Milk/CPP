#include<iostream>
using namespace std;

double sum(double a, double b)
{
	return (a + b);
}

int main()
{
	double i, j;
	cin >> i >> j;
	cout << sum(i, j);
	return 0;
}