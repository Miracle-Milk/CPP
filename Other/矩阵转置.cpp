#include<iostream>
using namespace std;

int main()
{
	int a[5][5], n,b[5][5];
	/*����*/
	cin >> n;
	if (n < 1 || n>5)
	{
		cout << "matrix order error";
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	/*��Ԫ���±���л���*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
		}
	}
	/*���*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j != n - 1)
				cout << b[i][j] << " ";
			else
				cout << b[i][j];
		}
		cout << endl;
	}
	return 0;
}