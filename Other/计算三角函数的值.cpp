#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	y = sin(x) - log(x) + sqrt(x) - 5.0;
	cout << y;
	return 0;
}