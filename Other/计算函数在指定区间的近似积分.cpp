#include <iostream>
#include <cmath>
using namespace std;

#define N 100

double Integral(double (*fun)(double x), double a, double b)
{
	double sum = 0.0, delta = (b - a) / N;;
	for (int i = 0; i <= N - 1; i++)
	{
		sum = sum + (*fun)(a + i * delta);
	}
	sum = delta * sum;
	return sum;
}

int main()
{
	double a, b, c, d;
	cin >> a >> b;
	for (int i = 0; i < 3; i++)
	{
		switch (i)
		{
		case 0:cout << (c = Integral(sin, a, b)) << ' '; break;
		case 1:cout << (d = Integral(cos, a, b)) << ' '; break;
		case 2:cout << c + d; break;
		}
	}
	return 0;
}