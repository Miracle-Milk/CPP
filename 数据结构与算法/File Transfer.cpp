#include<iostream>
using namespace std;

#define MAXSize 10000
int net[MAXSize];						//

int Find(int a[], int x)				//寻找集合的根  使用路径压缩
{
	if (a[x] < 0)	//找到了集合的根 返回根
		return x;
	else
		return a[x] = Find(a, a[x]);	//先找到根 再把x的父节点变成根
}

void Union(int a[], int r1, int r2)		//按秩归并
{
	if (a[r2] < a[r1])	//r1的树高比r2大 
		a[r1] = r2;	//把r2贴到r1上
	else
	{
		if (a[r1] == a[r2])	//r1 r2高度相同 树高+1
		{
			a[r1]--;
		}
		a[r2] = r1;	//把r1贴到r2上 
	}
}

void Initialization(int a[], int n)		//数组初始化
{
	for (int i = 0; i < n; i++)
	{
		a[i] = -1;
	}
}

void Input(int a[])						//插入数据
{
	int r1, r2;
	int x1, x2;
	cin >> x1 >> x2;
	r1 = Find(a, x1 - 1);	//数组下标从0开始 所以-1
	r2 = Find(a, x2 - 1);
	if (r1 != r2)			//根不相同 并到一个集合中
	{
		Union(a, r1, r2);
	}
}

void Check(int a[])						//查找
{
	int r1, r2;
	int x1, x2;
	cin >> x1 >> x2;
	r1 = Find(a, x1 - 1);	//数组下标从0开始 所以-1
	r2 = Find(a, x2 - 1);
	if (r1 != r2)
	{
		cout << "no" << endl;
	}
	else
	{
		cout << "yes" << endl;
	}
}

void checkNet(int a[], int n)			//程序结束前的查找
{
	int rootNum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			rootNum++;
	}
	if (rootNum == 1)
		cout << "The network is connected.";
	else
		cout << "There are " << rootNum << " components.";
}

int main()
{
	int n;
	char in;
	cin >> n;
	Initialization(net, n);		//初始化数组
	do
	{
		cin >> in;				//选择进行的操作
		switch (in)
		{
		case 'I':Input(net); break;
		case 'C':Check(net); break;
		case 'S':checkNet(net, n); break;
		}
	} while (in!='S');
	return 0;
}