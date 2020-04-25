#include<iostream>
using namespace std;

double power(double a, int b)
{
	double s = 1;
	if (b > 0)
	{
		for (int i = 0; i < b; i++)
		{
			s = a * s;
		}
	}
	if (b < 0)
	{
		b = -b;
		for (int i = 0; i < b; i++)
		{
			s = a * s;
		}
		s = 1 / s;
	}
	if (a == 0)
		s = 0;
	return s;
}

int main()
{
	double i;
	int j;
	cin >> i >> j;
	cout << power(i, j);
	return 0;
}