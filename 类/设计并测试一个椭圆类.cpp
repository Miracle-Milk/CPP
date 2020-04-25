#include<iostream>
using namespace std;

#define PI 3.14

class Ellipse
{
public:
	Ellipse();
	Ellipse(int, int, double, double);
	~Ellipse();
	double Area();
private:
	int x, y;
	double longradius, shortradius;
};

Ellipse::Ellipse()
{
}

Ellipse::Ellipse(int x, int y, double l, double s)
{
	this->x = x;
	this->y = y;
	this->longradius = l;
	this->shortradius = s;
}

Ellipse::~Ellipse()
{
}

double Ellipse::Area()
{
	return PI * longradius * shortradius;
}

int main()
{
	int x, y;
	double l, s;
	cin >> x >> y >> l >> s;
	Ellipse e1(x, y, l, s);
	cout << e1.Area();
	return 0;
}