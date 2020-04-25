#include<iostream>
using namespace std;

int* newArray(int n)	//根据参数n动态申请n个元素的整型数组，最后将数组指针返回
{
	int* p = new int[n];
	return p;
}

void initArray(int* p, int n, int c)	//指定的n个元素的数组每个元素的值均初始化为c
{
	for (int i = 0; i < n; i++)
	{
		*(p + i) = c;
	}
}

int main()
{
	int n, num;
	int* p;
	cin >> n >> num;
	p = newArray(n);	//动态申请数组
	initArray(p, n, num);	//初始化数组
	//输出
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			cout << *(p + i);
		}
		else
		{
			cout << *(p + i) << " ";
		}
	}
	return 0;
}