#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void allArrage(int* a,int k,int m )		//k表示第几个数,m表示数组的下标
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
			//交换后递归到下一层
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
	a = new int[n];		//动态申请一个数组
	assignment(a, n);	//给动态申请的数组赋值
	allArrage(a, 0, n - 1);
	return 0;
}