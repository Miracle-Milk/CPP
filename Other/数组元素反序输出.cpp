#include<iostream>
using namespace std;

int main()
{
	int a, b[100];
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
	}
	for (int i = a - 1; i >= 0; i--)
	{
		if (i)
			cout << b[i] << " ";
		else
			cout << b[i];
	}
	return 0;
}