#include<iostream>
using namespace std;

int main()
{
	int a[20][20], max[20], i, j;
	cin >> i >> j;
	for (int k = 0; k < i; k++)
	{
		int eachmax = -9999;
		for (int u = 0; u < j; u++)
		{
			cin >> a[k][u];
			if (eachmax < a[k][u])
				eachmax = a[k][u];
		}
		max[k] = eachmax;
	}
	for (int k = 0; k < i; k++)
	{
		cout << max[k] << endl;
	}
}