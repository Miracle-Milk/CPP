#include<iostream>
using namespace std;

int maxnumber(int a[100], int n)
{
	int max = -9999;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
int minnumber(int a[100], int n)
{
	int min = 9999;
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
}

int main()
{
	int a[100], lenth = 0;
	cin >> lenth;
	for (int i = 0; i < lenth; i++)
	{
		cin >> a[i];
	}
	cout << maxnumber(a, lenth) << endl;
	cout << minnumber(a, lenth);
	return 0;
}