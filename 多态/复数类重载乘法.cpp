#include<iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double, double);
	~Complex();
	void set(double, double);
	void show();
	Complex operator*(Complex);
private:
	double x, y;
};

Complex::Complex()
{
	x = 0; y = 0;
}

Complex::Complex(double x, double y)
{
	this->x = x;
	this->y = y;
}

Complex::~Complex()
{
}

void Complex::set(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Complex::show()
{
	cout << x << "+" << y << "j";
}

Complex Complex::operator*(Complex b)
{
	Complex c;
	c.x = x * b.x - y * b.y;
	c.y = y * b.x + x * b.y;
	return c;
}

int main()
{
	Complex a(1, 2), b(3, 4), c;	//定义对象
	double x, y;

	a.show(); cout << endl;
	b.show(); cout << endl;
	c.show(); cout << endl;
	
	cin >> x >> y;			//输入
	b.set(x, y);
	c = a * b;				//复数相乘

	a.show(); cout << endl;
	b.show(); cout << endl;
	c.show(); cout << endl;

	return 0;
}