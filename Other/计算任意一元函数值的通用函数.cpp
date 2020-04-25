#include<iostream>
#include<cmath>
using namespace std;

double pingfang(double x)
{
	return x * x;
}

double mysin(double x)
{
	double y;
	y = 2 * sin((4 * x + 1) * 3.14);
	return y;
}

double anyfun(double (*f)(double), double x)
{
	return f(x);
}

int main()
{
	double x;
	cin >> x;
	cout << anyfun(pingfang, x) << " ";	//过指向函数的额指针调用函数pingfang
	cout << anyfun(mysin, x) << endl;	//过指向函数的额指针调用函数mysin
	return 0;
}