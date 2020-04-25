#include<iostream>
using namespace std;

double abs(double a)
{
	if (a > 0)
		return a;
	else
		return -a;
}

int main()
{
	double i;
	cin >> i;
	cout << abs(i);
	return 0;
}