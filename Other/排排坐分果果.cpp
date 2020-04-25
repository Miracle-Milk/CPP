#include<iostream>
using namespace std;

int main()
{
	int a, k, b=0;
	cin >> a >> k;
	b = a - 1 + k;
	if (b > 10)
		b = b % 10;
	cout << b;
	for (int i = 0; i < 3; i++)
	{
		b += k;
		while (b % 10 == 0 && b > 10)
		{
			b = b - 10;
		}
		if (b > 10)
			b = b % 10;
		cout << " " << b;
	}
	return 0;
}