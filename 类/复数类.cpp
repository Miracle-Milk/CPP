#include<iostream>
#include<cmath>
using namespace std;

class COMPLEX
{
public:
	COMPLEX();
	~COMPLEX();
	void set(double r, double i);
	void show();
	COMPLEX add(COMPLEX a);
	double getReal();
	double getImag();
	double module();
private:
	double x, y;
};

void COMPLEX::set(double r, double i)	//赋值
{
	x = r;
	y = i;
}

void COMPLEX::show()					//打印复数
{
	if (y >= 0)
	{
		cout << x << "+" << y << "j";	//虚部为正数时加个+
	}
	else
	{
		cout << x << y << "j";
	}
}

COMPLEX COMPLEX::add(COMPLEX a)			//类相加
{
	COMPLEX c;
	c.x = x + a.x;
	c.y = y + a.y;
	return c;
}

double COMPLEX::getReal()				//返回实部
{
	return x;
}

double COMPLEX::getImag()				//返回虚部
{
	return y;
}

double COMPLEX::module()				//返回复数的模-->(实部的平方+虚部的平方)开方
{
	double s;
	s = x * x + y * y;
	s = sqrt(s);
	return s;
}

COMPLEX::COMPLEX()
{
}

COMPLEX::~COMPLEX()
{
}

int main()
{
	COMPLEX a, b, c;
	double x, y;
	cin >> x >> y;
	a.set(x, y);
	cin >> x >> y;
	b.set(x, y);
	c = a.add(b);
	c.show();
	cout << endl;
	cout << c.getReal() << endl;
	cout << c.getImag() << endl;
	cout << c.module() << endl;
	return 0;
}