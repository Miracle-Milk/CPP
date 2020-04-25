#include<iostream>
using namespace std;

int main()
{
	char a[4];
	int b[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
		b[i] = int(a[i] - 97);
	}
	for (int i = 0; i < 4; i++)
	{
		(b[i] > 10) ? cout << b[i] : cout << "0" << b[i];
	}
	return 0;
}