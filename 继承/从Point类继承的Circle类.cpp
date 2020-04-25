#include<iostream>
using namespace std;

#define PI 3.14

class Point
{
public:
	Point();
	Point(int, int);
	~Point();
	void setPoint(int, int);
	int getX();
	int getY();
	void print();
private:
	int x, y;
};

Point::Point()
{
	x = 0; y = 0;
}

Point::Point(int x,int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

void Point::setPoint(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::print()
{
	cout << "[" << x << "," << y << "]";
}

class Circle:public Point
{
public:
	Circle();
	Circle(int, int, double);
	~Circle();
	void setRadius(double);
	double getRadius();
	double area();
	void print();
private:
	double radius;
};

Circle::Circle()
{
	Point::setPoint(0, 0);
	radius = 0;
}

Circle::Circle(int x, int y, double r)
{
	Point::setPoint(x, y);
	radius = r;
}

Circle::~Circle()
{
}

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::area()
{
	return PI * radius * radius;
}

void Circle::print()
{
	
	Point::print();
}

int main()
{
	int x, y;
	double r;
	cin >> x >> y;
	Point P1(x, y);
	cin >> x >> y >> r;
	Circle C1(x, y, r);
	cout << "Point p ";
	P1.print();
	cout << endl;
	cout << "Circle c Center=";
	C1.print();
	cout << endl;
	cout << "Radius=" << C1.getRadius() << endl;
	cout << "The centre of circle c ";
	C1.print();
	cout << endl;
	cout << "The area of circle c " << C1.area() << endl;
	return 0;
}