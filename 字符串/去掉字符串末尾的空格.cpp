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
		n = i;
		if (a[i] == '\0')
			break;
	}
	for (int i = n; i >= 0; i--)
	{
		if (a[i] == 32)
		{
			if (a[i - 1] != 32 && a[i + 1] == 32)
			{
				a[i] = '\0';
				break;
			}
		}
	}
	cout << "|" << a << "|" << endl;
	return 0;
}