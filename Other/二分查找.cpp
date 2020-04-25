#include<iostream>
using namespace std;

int Fun(int a[], int n, int x)
{
	int min = 0, max = n - 1;
	int mid;
	mid = (max + min) / 2;
	while (max >= min)
	{
		if (a[mid] == x)
			return mid;
		else if (a[mid] > x)
		{
			max = mid - 1;
		}
		else if (a[mid] < x)
		{
			min = mid + 1;
		}
		mid = (max + min) / 2;
	}
	return -1;
}

int main()
{
	int a[300] = {}, n, x;
	int in;
	for (int i = 0; i < 300; i++)
	{
		cin >> in;
		if (in != -99999)
			a[i] = in;
		else
		{
			n = i;
			break;
		}
	}
	cin >> x;
	cout << Fun(a, n, x);
	return 0;
}