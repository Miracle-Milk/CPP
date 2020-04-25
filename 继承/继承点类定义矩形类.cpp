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

class RECT:public POINT
{
public:
	RECT();
	RECT(double, double, double, double);
	~RECT();
	void set(double,double,double,double);
	void show();
private:
	double width, height;
};

RECT::RECT()
{
	POINT::set(0, 0);
	width = 0;
	height = 0;
}

RECT::RECT(double a, double b, double w, double h)
{
	POINT::set(a, b);
	this->width = w;
	this->height = h;
}

RECT::~RECT()
{
}

void RECT::set(double a, double b, double w, double h)
{
	POINT::set(a, b);
	this->width = w;
	this->height = h;
}

void RECT::show()
{
	POINT::show();
	cout << " width=" << width << " height=" << height;
}

int main()
{
	RECT a, b(1, 2, 10, 5);
	double x, y, w, h;
	a.show(); cout << endl;
	b.show(); cout << endl;
	cin >> x >> y >> w >> h;
	a.set(x, y, w, h);
	a.show(); cout << endl;
	return 0;
}