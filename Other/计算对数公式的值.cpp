#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, x, y;
	cin >> x >> a;
	y = log(x + sqrt(x * x + 1));
	cout << y / log(a);
	return 0;
}