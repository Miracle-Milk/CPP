#include<iostream>
using namespace std;

int input(int a[])
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

int input(double a[])
{
	double in;
	int num = 0;
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

void print(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << a[i] << " ";
		else
			cout << a[i] << endl;
	}
}

void print(double a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << a[i] << " ";
		else
			cout << a[i] << endl;
	}
}

int main()
{
	int ai[100];
	double ad[100];
	int ni, nd;
	ni = input(ai);
	nd = input(ad);
	print(ai, ni);
	print(ad, nd);
	return 0;
}