#include<iostream>
using namespace std;

int sumDiagonal(int** a, int n)		//返回矩阵的对角元素之和
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *(*(a + i) + i);
	}
	return sum;
}

int main()
{
	int** a;
	int n;
	cin >> n;
	//动态申请数组
	a = new int* [n];		//行指针数组
	for (int i = 0; i < n; i++)
	{
		a[i] = new int [n];//每个行指针对应的数组
	}
	//输入数据
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a[i][j];//输入 
			//cin >> *(*(a + i) + j);//同上a相当于行指针 
		}
	}
	cout << sumDiagonal(a, n) << endl;
	return 0;
}