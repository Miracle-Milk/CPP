#include<iostream>
using namespace std;

int commonNumber(int a, int b)
{
	int num;
	num = a % b;
	if (num == 0)
	{
		return b;
	}
	else
	{
		num = commonNumber(b , num);
	}
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << commonNumber(x, y);
	return 0;
}