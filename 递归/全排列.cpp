#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void allArrage(int* a,int k,int m )		//k��ʾ�ڼ�����,m��ʾ������±�
{
	if (k == m)
	{
		for (int i = 0; i <= m; i++)
		{
			if (i == m)
			{
				cout << a[i];
			}
			else
			{
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	else
	{
		for (int i = k; i <= m; i++)
		{
			swap(a[i], a[k]);
			//������ݹ鵽��һ��
			allArrage(a, k + 1, m);
			swap(a[i], a[k]);
		}
	}
}

void assignment(int* a,int num)
{
	for (int i = 0; i < num; i++)
	{
		a[i] = i + 1;
	}
}

int main()
{
	int* a;
	int n;
	cin >> n;
	a = new int[n];		//��̬����һ������
	assignment(a, n);	//����̬��������鸳ֵ
	allArrage(a, 0, n - 1);
	return 0;
}