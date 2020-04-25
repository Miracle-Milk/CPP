#include<iostream>
using namespace std;

int main()
{
	char a[100];
	cin.getline(a, 100);
	cout << "|" << a << "|" << endl;
	int n = 0;
	for (int i = 0; i < 100; i++)
	{
		if (a[0] != 32)
			break;
		if (a[i] == 32 && a[i + 1] != 32)
		{
			n = i + 1;
			break;
		}
	}
	char b[100] = {};
	for (int i = 0; i < 100; i++)
	{
		b[i] = a[n];
		n++;
		if (a[n] == '\0')
		{
			break;
		}
	}
	cout << "|" << b << "|" << endl;
	return 0;
}