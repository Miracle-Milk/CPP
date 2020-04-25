#include<iostream>
using namespace std;

//��n����ǰ���Ѿ�����õ�����
void Insert(int* a, int n)
{
	int i = n - 1;
	int key = a[n];
	while ((i >= 0) && key < a[i])
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = key;
}

void Insert_Sort(int* A, int n)
{
	if (n > 0)
	{
		Insert_Sort(A, n - 1); //�ݹ��ʾǰ���Ѿ������
		Insert(A, n);
	}
	else   //�ݹ�ĳ�����n=0
		return;
}

int input(int* a)
{
	int num = 0 , temp;
	for (int i = 0; i < 100; i++)
	{
		cin >> temp;
		if (temp != -9999)
		{
			a[i] = temp;
			num++;
		}
		else
		{
			break;
		}
	}
	return num;
}

void output(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			cout << a[i];
		}
		else
		{
			cout << a[i] << " ";
		}
	}
}

int main()
{
	int a[100];
	int n = input(a);
	Insert_Sort(a, n-1);

	output(a, n);
	return 0;
}