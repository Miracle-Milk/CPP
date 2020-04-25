#include<iostream>
#include<cmath>
using namespace std;

#define Delta 0.001

double sinDerivative(double x)
{
	double Derivative;
	Derivative = (sin(x + Delta) - sin(x - Delta)) / (2 * Delta);
	return Derivative;
}

double cosDerivative(double x)
{
	double Derivative;
	Derivative = (cos(x + Delta) - cos(x - Delta)) / (2 * Delta);
	return Derivative;
}

double sincosDerivative(double x)

{
	double Derivative;
	Derivative = ((sin(x+Delta)+cos(x + Delta)) - (sin(x - Delta)+ cos(x - Delta))) / (2 * Delta);
	return Derivative;
}

int main()
{
	double x;
	cin >> x;
	cout << sinDerivative(x) << " " << cosDerivative(x) << " " << sincosDerivative(x);
	return 0;
}