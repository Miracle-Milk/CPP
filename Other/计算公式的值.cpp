#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	y = x / sqrt(x * x - 3 * x + 2);
	cout << y;
	return 0;
}