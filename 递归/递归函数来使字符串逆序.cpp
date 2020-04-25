#include<iostream>
using namespace std;

void print(char a[], int n)
{
	if (n >= 1)
	{
		cout << a[n - 1];
		if (n != 1)
		{
			print(a, n - 1);
		}
	}
}

int main()
{
	char a[100];
	int n;
	cin.getline(a, 100);
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
		{
			n = i;
			break;
		}
	}
	print(a, n);
	return 0;
}