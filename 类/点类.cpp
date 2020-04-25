#include<iostream>
#include<cmath>
using namespace std;

class POINT
{
public:
	POINT();
	~POINT();
	void set(double x1, double y1);
	void show();
	double distance(POINT a);

private:
	double x, y;
};

void POINT::set(double x1, double y1)
{
	x = x1;
	y = y1;
}

void POINT::show()
{
	cout << "(" << x << "," << y << ")";
}

double POINT::distance(POINT a)
{
	double d;
	d = (a.x - x) * (a.x - x) + (a.y - y) * (a.y - y);
	d = sqrt(d);
	return d;
}

POINT::POINT()
{
}

POINT::~POINT()
{
}

int main()
{
	POINT a, b;
	double x, y;
	cin >> x >> y;
	a.set(x, y);
	cin >> x >> y;
	b.set(x, y);
	a.show(); cout << endl;
	b.show(); cout << endl;
	cout << a.distance(b) << endl;
	return 0;
}