#include<iostream>
#include<cmath>
using namespace std;

class Point
{
public:
	Point();
	Point(double, double);
	~Point();
	void set(double,double);
	void show();
	double distance(Point);
private:
	double x, y;
};

void Point::set(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::show()
{
	cout << "(" << x << "," << y << ")";
}

double Point::distance(Point b)
{
	double sum;
	sum = (b.x - this->x) * (b.x - this->x) + (b.y - this->y) * (b.y - this->y);
	return sqrt(sum);
}

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::~Point()
{
}

int main()
{
	double x, y;
	cin >> x >> y;
	Point a(x, y);
	cin >> x >> y;
	Point b(x, y);
	a.show(); cout << endl;
	b.show(); cout << endl;
	cout << a.distance(b) << endl;
	return 0;
}