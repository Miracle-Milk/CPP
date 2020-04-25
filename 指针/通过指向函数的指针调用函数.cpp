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

int main()
{
	double(*f)(double);		//定义指向函数的额指针
	double x;				//定义自变量
	cin >> x;				//输入x

	f = pingfang;			//为指向函数的指针赋值
	cout << f(x) << " ";	//通过指向函数的额指针调用函数
	f = mysin;				//为指向函数的另一个指针赋值
	cout << f(x) << endl;	//通过指向函数的额指针调用另一个函数
	return 0;
}