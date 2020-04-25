#include<iostream>
#include<cmath>
using namespace std;

double funavg(double (*f)(double x), double a, double b, int n)
{
	double h;
	h = (b - a) / n;
	double avg = 0;
	for (int i = 0;i * h <= b;i++)
	{
		avg += f(a + i * h);
	}
	return avg / 1001;
}


int main()
{
	double a, b;
	int n = 1000;
	cin >> a >> b;
	cout << funavg(exp, a, b, n) << " ";
	cout << funavg(sin, a, b, n) << " ";
	cout << funavg(cos, a, b, n) << endl;
	return 0;
}