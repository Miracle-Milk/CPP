#include<iostream>
using namespace std;

int fun(int day ,int num )
{
	if (day == 1)
		return num;
	num = (num + 1) * 2;
	--day;
	num = fun(day, num);
}

int main()
{
	int n, k = 1;
	cin >> n;
	cout << fun(n, k);
	return 0;
}