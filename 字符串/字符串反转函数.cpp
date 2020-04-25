#include<iostream>
using namespace std;

void strexchange(char a[100], int n)
{
	int j = 0;
	for (int i = n - 1; i >= (n / 2); i--)
	{
		int temp = 0;
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j++;
	}
}

int main()
{
	char a[100];
	int lenth;
	cin.getline(a, 100);
	for (int i = 0; i < 100; i++)
	{
		if (a[i] != '\0')
			lenth++;
		else
			break;
	}
	strexchange(a, lenth);
	cout << a;
	return 0;
}