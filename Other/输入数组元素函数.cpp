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

int main()
{
	int a[100], num;
	num = getnumber(a);
	for (int i = num - 1; i >= 0; i--)
	{
		if (i != 0)
			cout << a[i] << " ";
		else
			cout << a[i];
	}
	return 0;
}