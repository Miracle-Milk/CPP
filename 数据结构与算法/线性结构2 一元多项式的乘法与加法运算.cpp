#include<iostream>
using namespace std;
#define N 10000
/*
十分暴力却又十分聪明的方法
参考自https://blog.csdn.net/Changxing898/article/details/52324803
*/
int main()
{
	int a[N] = { 0 };//第一个多项式
	int b[N] = { 0 };//第二个多项式
	int c[N] = { 0 };//多项式的积
	int d[N] = { 0 };//多项式的和

	int i, m, f;
	cin >> i;//多项式的项数
	while (i--)
	{
		cin >> m >> f;
		a[f] += m;//f是多项式项的指数  m是多项式项的系数  (很浪费空间...)
	}
	cin >> i;
	while (i--)
	{
		cin >> m >> f;
		b[f] += m;
	}
	for (int i = N - 1; i >= 0; i--)//求多项式的积  i从大到小 指数从大到小进行运算
	{
		if (a[i])				//系数不为0
		{
			for (int j = 0; j < N; j++)
			{
				if (b[j])
				{
					c[i + j] += a[i] * b[j];  //i+j指数相加,a[i]*b[j]系数相乘
				}
			}
		}
	}
	int zero = 0;//初始化一个计数的zero,用来判断多项式是否为空
	for (int i = N - 1; i >= 0; i--)
	{
		if (c[i])//对应的系数不为0
		{
			if (zero)
				cout << " ";
			cout << c[i] << " " << i;//系数在前 指数在后
			zero++;//多项式不为空
		}
	}
	if (zero == 0)//多项式为空 输出0 0
		cout << "0 0";

	cout << endl;

	for (int i = N - 1; i >= 0; i--)
	{
		/*系数不为0时 系数相加 指数不变*/
		if (a[i])
			d[i] += a[i];
		if (b[i])
			d[i] += b[i];
	}
	
	zero = 0;//又开始判断多项式是否为空 重新赋值0

	for (int i = N - 1; i >= 0; i--)
	{
		if (d[i])//和的系数不为0
		{
			if (zero)
				cout << " ";
			cout << d[i] << " " << i;
			zero++;
		}
	}
	if (zero == 0)
		cout << "0 0";
	return 0;
}