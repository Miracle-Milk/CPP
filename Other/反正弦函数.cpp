#include<iostream>
using namespace std;

int main()
{
	int a, b, c = 0;
	cin >> a;
	b = a;
	while (b > 0)
	{
		c = c * 10 + b % 10;
		b = b / 10;
	}
	if (c == a)
	{
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}