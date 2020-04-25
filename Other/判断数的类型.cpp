#include<iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;
	if (a > 0)
	{
		if (int(a) == a)
			cout << "positive integer";
		else
			cout << "positive real";
	}
	if (a < 0)
	{
		if (int(a) == a)
			cout << "nagative integer";
		else
			cout << "nagative real";
	}
	if (a == 0)
		cout << "zero";
	return 0;
}