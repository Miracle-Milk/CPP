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

int sum(int a[100],int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}
int main()
{
	int i[100], num;
	num = getnumber(i);
	cout << sum(i, num);
	return 0;
}