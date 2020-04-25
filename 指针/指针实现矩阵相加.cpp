#include<iostream>
using namespace std;

int m, n;

void sum(int** a, int** b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] += b[i][j];
		}
	}
}

void print(int** a)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (n - 1 == j)
			{
				cout << a[i][j];
			}
			else
			{
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
}

void getArray(int** a)
{
	for (int i = 0; i < m; i++)
	{
		a[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

int main()
{
	int** a;
	int** b;		//����ָ�������ָ��
	cin >> m >> n;	//m�� n��
	a = new int* [m];	//m��->m��һά����
	b = new int* [m];
	getArray(a);
	getArray(b);
	sum(a, b);
	print(a);
	return 0;
}