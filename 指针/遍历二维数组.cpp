#include<iostream>
using namespace std;

int main()
{
	int** a;	//指向指针的指针
	int m, n;	//n行 m列
	int sum = 0;	//数据的和
	cin >> m >> n;
	//申请空间
	a = new int* [n];	//n个int类型的指针 指向每一行
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];		//每行为一个大小为m的一维数组 a[i]是指针
	}
	//输入数据
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//cin>>a[i][j];//输入 
			cin >> *(*(a + i) + j);//同上a相当于行指针 
			sum += *(*(a + i) + j);
		}
	}
	//输出数据
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//cin>>a[i][j];//输出 
			cout << *(*(a + i) + j) << "\t";
		}
	}*/
	//输出数据的和
	cout << sum << endl;
	//释放空间
	for (int i = 0; i < n; i++)	//释放n个大小为m的一维数组
	{
		delete[]a[i];
	}
	delete[]a;					//释放int指针数组
	return 0;
}