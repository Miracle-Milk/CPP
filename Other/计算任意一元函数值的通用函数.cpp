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
	cout << anyfun(pingfang, x) << " ";	//��ָ�����Ķ�ָ����ú���pingfang
	cout << anyfun(mysin, x) << endl;	//��ָ�����Ķ�ָ����ú���mysin
	return 0;
}