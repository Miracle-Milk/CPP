#include<iostream>
using namespace std;

int H[1001], s;		//定义全局变量 s为元素个数

void creat()
{
	s = 0;
	H[0] = -10001;
}

void insert(int x)
{
	int i;
	for (i = ++s; H[i / 2] > x; i /= 2) //将大的元素下移，找到X的位置i 
	{
		H[i] = H[i / 2];
	}
	H[i] = x;
}

int main()
{
	int n, sle;				//n为输入元素的个数 sle为查找的元素的个数
	cin >> n >> sle;
	creat();					//初始化堆
	int a, b;					//输入元素的缓存
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		insert(b);
	}
	for (int i = 0; i < sle; i++) 
	{
		cin >> a;
		cout << H[a];
		while (a > 1) 
		{
			a /= 2;
			cout << " " << H[a];
		}
		cout << endl;
	}
	return 0;
}