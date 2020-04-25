#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void sort(int a[], int n)
{
	int temp;
	for (int i = 1; i < n; i++)
	{
		temp = *(a + i);				//将要插入的数据赋值给temp
		for (int j = i; j > 0; j--)		//向前扫描
		{
			if (*(a + j - 1) > * (a + j))	//需要移动
			{
				swap(*(a + j - 1), *(a + j));
			}
			else
			{
				break;
			}
		}
	}
}

int main()
{
	int a[100], temp, n = 0;
	for (int i = 0; i < 100; i++)	//输入数据
	{
		cin >> temp;
		if (temp != -9999)
		{
			*(a + i) = temp;
			n++;
		}
		else
		{
			break;
		}
	}
	sort(a, n);
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			cout << *(a + i);
		}
		else
		{
			cout << *(a + i) << " ";
		}
	}
}