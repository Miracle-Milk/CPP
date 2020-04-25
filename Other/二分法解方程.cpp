#include<iostream>
#include<cmath>
using namespace std;

double F(double x)	//函数
{
	double y;
	y = 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
	return y;
}

double root(double a, double b, double k)	//二分法求根
{
	if (abs(F((a + b) / 2)) <= k)			//abs()取绝对值
	{
		return (a + b) / 2;
	}
	else if (F((a + b) / 2) < 0)			//中间值小于0 说明根在右边
	{
		return root((a + b) / 2, b, k);
	}
	else if (F((a + b) / 2) > 0)			//中间值大于0 说明根在左边
	{
		return root(a, (a + b) / 2, k);
	}
}

int main()
{
	double left, right;	//区间左右端点
	double precision;	//精度
	cin >> left >> right >> precision;
	if (F(left) * F(right) < 0)
	{
		cout << root(left, right,precision);
	}
	else if (F(left) * F(right) == 0)
	{
		cout << left;
	}
	return 0;
}