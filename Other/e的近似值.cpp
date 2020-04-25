#include<iostream>
using namespace std;

int main()
{
	int n;
	double y;
	cin >> n;
	y = (1 + 1.0 / n);
	for (int i = 1; i < n; i++)
		y = (1 + 1.0 / n) * y ;
	cout << y;
	return 0;
}