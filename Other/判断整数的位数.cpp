#include<iostream>
using namespace std;

int main()
{
	int a, b=1;
	cin >> a;
	while (a/10)
	{
		a = a / 10;
		b++;
	}
	cout << b;
	return 0;
}