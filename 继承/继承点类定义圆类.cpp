#include<iostream>
using namespace std;

class POINT
{
public:
	POINT();
	POINT(double, double);
	~POINT();
	void set(double, double);
	void show();
private:
	double x, y;
};

POINT::POINT()
{
	x = 0;
	y = 0;
}

POINT::POINT(double x, double y)
{
	this->x = x;
	this->y = y;
}

POINT::~POINT()
{
}

void POINT::set(double x, double y)
{
	this->x = x;
	this->y = y;
}

void POINT::show()
{
	cout << "x=" << x << " y=" << y;
}

class Circle:public POINT
{
public:
	~Circle();
	Circle(double x = 0, double y = 0, double r = 0.0);
	void set(double, double, double);
	void show();
private:
	double r;
};

Circle::Circle(double a, double b, double c) :POINT(a, b)
{
	r = c;
}

Circle::~Circle()
{
}

void Circle::set(double a, double b, double c)
{
	POINT::set(a, b);
	r = c;
}

void Circle::show()
{
	POINT::show();
	cout << " r=" << r;
}

int main()
{
	Circle a, b(1, 2, 3);
	double x, y, r;
	a.show(); cout << endl;
	b.show(); cout << endl;
	cin >> x >> y >> r;
	a.set(x, y, r);
	a.show(); cout << endl;
	return 0;
}