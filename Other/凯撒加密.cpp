#include<iostream>
using namespace std;

int main()
{
	char a[20];
	cin >> a;
	for (int i = 0; i < 20; i++)
	{
		if (a[i] > 64 && a[i] < 88)
			a[i] = a[i] + 35;
		else if (a[i] > 96 && a[i] < 120)
			a[i] = a[i] - 29;
		else if (a[i] > 87 && a[i] < 91)
			a[i] = a[i] + 9;
		else if (a[i] > 119 && a[i] < 123)
			a[i] = a[i] - 55;
	}
		cout << a;
	return 0;
}