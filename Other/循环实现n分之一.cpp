#include<iostream>
using namespace std;

int main()
{
	int a;
	double sum = 1.0;
	cin >> a;
	for (int i = 2; i <= a; i++)
	{
		sum = sum + 1.0 / i;
	}
	if (a == 1)
		cout << "1";
	else if (a == 0)
		cout << "0";
	else
		cout << sum;
	return 0;
}