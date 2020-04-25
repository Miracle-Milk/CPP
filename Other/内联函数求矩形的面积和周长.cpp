#include<iostream>
using namespace std;

inline int fun(int a, int b)
{
	cout << a * b << " ";
	cout << (a + b) * 2;
	return 0;
}

int main()
{
	int a, b;
	cin >> a >> b;
	fun(a, b);
	return 0;
}