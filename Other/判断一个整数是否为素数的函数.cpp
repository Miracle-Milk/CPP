#include<iostream>
#include<cmath>
using namespace std;

int isprime(int a)
{
	if (a == 1)
		return 0;
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0 && i < a)
			return 0;	//注意2是质数 
	}
	return 1;
}

int main()
{
	int a[20], j = 0;
	for (int i = 0; i < 20; i++)
	{
		int k;
		cin >> k;
		if (k != 0)
		{
			if (isprime(k))
			{
				a[j] = k;
				j++;
			}
		}
		else
			break;
	}
	for (int i = 0; i < j; i++)
	{
		if (i != j - 1)
			cout << a[i] << " ";
		else
			cout << a[i];
	}
}