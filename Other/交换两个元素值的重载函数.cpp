#include<iostream>
using namespace std;

void print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << a[i] << " ";
		else
			cout << a[i] << endl;
	}
}

void print(double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << a[i] << " ";
		else
			cout << a[i] << endl;
	}
}

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;
}

void swap(double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
	return;
}

void swap(int a[], int& n, int b[], int& m)
{
	int max;
	if (n > m)
		max = n;
	else
		max = m;
	int temp;
	temp = n;
	n = m;
	m = temp;
	for (int i = 0; i < max; i++)
	{
		int temp;
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	return;
}

void swap(char a[], char b[])
{
	char temp[100] = {};
	for (int i = 0; i < 100; i++)
	{
		if (a[i] != '\0')
			temp[i] = a[i];
		else
			break;
	}
	for (int i = 0; i < 100; i++)
	{
		if (b[i] != '\0')
			a[i] = b[i];
		else
			break;
	}
	for (int i = 0; i < 100; i++)
	{
		if (temp[i] != '\0')
			b[i] = temp[i];
		else
		{
			b[i] = '\0';
			break;
		}
	}
	return;
}

int main()
{
	int a, b;
	double ad, bd;
	int ai[100], bi[100];
	char ac[100] = {}, bc[100] = {};
	int n, m;
	cin >> a >> b;
	cin >> ad >> bd;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ai[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> bi[i];
	}
	cin >> ac >> bc;

	//½»»»
	swap(a, b);
	swap(ad, bd);
	swap(ai, n, bi, m);
	swap(ac, bc);

	//Êä³ö
	cout << a << " " << b << endl;
	cout << ad << " " << bd << endl;
	print(ai, n);
	print(bi, m);
	cout << ac << " " << bc << endl;
}