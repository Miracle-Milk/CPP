#include<iostream>
using namespace std;

double F(double x)		//º¯Êý
{
	return x * x * x + 2 * x * x + 3 * x + 4;
}

double DF(double x)		//µ¼º¯Êý
{
	return 3 * x * x + 4 * x + 3;
}

double select(double a)
{
	return a > 0 ? a : -a;
}

double Newton(double x, double k)
{
	double r;
	r = x - F(x) / DF(x);
	while (select(F(r)) >= k)
	{
		r = r - F(r) / DF(r);
	}
	return r;
}

int main()
{
	double x0, precision;
	cin >> x0 >> precision;
	cout << Newton(x0,precision);
	return 0;
}