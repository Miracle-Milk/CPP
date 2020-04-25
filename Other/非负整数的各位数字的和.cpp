#include<iostream>
using namespace std;

int main()
{
	int a, sum = 0, k;
	cin >> a;
	while (a)
	{
		k = a % 10;
		sum += k;
		a = a / 10;
	}
	cout << sum;
	return 0;
}