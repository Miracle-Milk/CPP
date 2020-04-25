#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double fah, cel;
	cin >> fah;
	cel = (fah - 32) * 5 / 9.0;
	cout << cel;
	return 0;
}