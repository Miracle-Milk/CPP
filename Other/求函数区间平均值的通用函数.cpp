#include<iostream>
using namespace std;

int a, b, c, m;

int  func1(int x)
{
	int y;
	y = a * (x * x) + b * x + c;
	return y;
}

int  func2(int x)
{
	int y = x;
	for (int i = 1; i < m; i++)
	{
		y *= x;
	}
	return y;
}

int avg(int (*f)(int), int x1, int x2)
{
	int sum = 0;
	for (int i = x1; i <= x2; i++)
	{
		sum += f(i);
	}
	return sum / (x2 - x1 + 1);
}

int main()
{
	int min, max;
	cin >> a >> b >> c;
	cin >> m;
	cin >> min >> max;
	cout << avg(func1, min, max) << endl;
	cout << avg(func2, min, max);
	return 0;
}