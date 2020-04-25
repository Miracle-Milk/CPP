#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a,b;
	cin >> a;
	b = sin(a * a) / (1 - cos(a));
	cout << b;
	return 0;
}