#include<iostream>
using namespace std;

void sort(int a[], int n)		//√∞≈›≈≈–Ú
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp;
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

int search(int a[], int x, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int a[100] = {};
	int n = 0 , temp;
	for (int i = 0; i < 100; i++)	// ‰»Î
	{
		cin >> temp;
		if (temp != -9999)
		{
			a[i] = temp;
			n++;
		}
		else
			break;
	}
	sort(a, n);
	for (int i = 0; i < 5; i++)
	{
		cin >> temp;
		cout << search(a,temp,n) << endl;
	}
	return 0;
}