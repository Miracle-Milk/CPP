#include<iostream>
using namespace std;

int getnumber(int a[100])
{
	int in, num = 0;
	for (int i = 0; i < 100; i++)
	{
		cin >> in;
		if (in != -9999)
		{
			a[i] = in;
			num++;
		}
		else
			break;
	}
	return num;
}

void printnum(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << a[i] << " ";
		else
			cout << a[i];
	}
}

void exchangenum(int a[100],int n)
{
	int temp, j = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j--;
	}
}
int main()
{
	int a[100], num;
	num = getnumber(a);
	exchangenum(a, num);
	printnum(a, num);
	return 0;
}