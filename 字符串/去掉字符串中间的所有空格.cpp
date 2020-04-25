#include<iostream>
using namespace std;

void Delchar(char a[], int i)
{
	for (int j = i + 1; j < 100; j++)
	{
		a[i] = a[j];
		i++;
		if (a[j] == '\0' || a[i] == '\0')
			break;
	}
	return;
}

int main()
{
	char a[100];
	int first = 0, last = 99, n = 99;
	cin.getline(a, 100);
	cout << "|" << a << "|" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (a[i] != 32)
		{
			first = i;
			break;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
		{
			n = i - 1;
			break;
		}
	}
	for (int i = n; i >= 0; i--)
	{
		if (a[i] != 32)
		{
			last = i;
			break;
		}
	}
	for (int i = first; i <last; i++)
	{
		if (i == last)
			break;
		if (a[i] == 32)
		{
			Delchar(a,i);
			//i--;
		}
	}
	cout << "|" << a << "|";
	return 0;
}