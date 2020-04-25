#include<iostream>
using namespace std;

#define PI 3.14

class Circle
{
public:
	Circle();
	Circle(double, double, double);
	~Circle();
	void set(double, double, double);
	void show();
	double perimeter();
	double area();
private:
	double x, y, r;
};

void Circle::set(double x, double y, double r)
{
	this->x = x;
	this->y = y;
	this->r = r;
}

void Circle::show()
{
	cout << "(" << x << "," << y << "," << r << ")";
}

double Circle::perimeter()
{
	double a;
	a = PI * 2 * r;
	return a;
}

double Circle::area()
{
	double a;
	a = PI * r * r;
	return a;
}

Circle::Circle()
{
	x = 0; y = 0; r = 0;
}

Circle::Circle(double x, double y, double r)
{
	this->x = x;
	this->y = y;
	this->r = r;
}

Circle::~Circle()
{
}

int main()
{
	Circle a;
	double x, y, r;
	//while (1)
	{
		cin >> x >> y >> r;
		Circle b(x, y, r);

		a.show(); cout << endl;
		cout << a.perimeter() << endl;
		cout << a.area() << endl;

		b.show(); cout << endl;
		cout << b.perimeter() << endl;
		cout << b.area() << endl;
	}
	return 0;
}