#include<iostream>
#include<cmath>
using namespace std;

class Trapezium
{
public:
	Trapezium();
	~Trapezium();
	void initial(int a1, int b1, int a2, int b2, int a3, int b3, int a4, int b4);
	void GetPosition(int& a1, int& b1, int& a2, int& b2, int& a3, int& b3, int& a4, int& b4);
	double Area();
private:
	int x1, y1, x2, y2, x3, y3, x4, y4;
};

void Trapezium::initial(int a1, int b1, int a2, int b2, int a3, int b3, int a4, int b4)
{
	x1 = a1;
	y1 = b1;
	x2 = a2;
	y2 = b2;
	x3 = a3;
	y3 = b3;
	x4 = a4;
	y4 = b4;
}

void Trapezium::GetPosition(int& a1, int& b1, int& a2, int& b2, int& a3, int& b3, int& a4, int& b4)
{
	a1 = x1;
	b1 = y1;
	a2 = x2;
	b2 = y2;
	a3 = x3;
	b3 = y3;
	a4 = x4;
	b4 = y4;
}

double Trapezium::Area()
{
	double sum;
	sum = (abs(x2 - x1) + abs(x4 - x3)) * abs(y4 - y2);
	return sum / 2;
}

Trapezium::Trapezium()
{
}

Trapezium::~Trapezium()
{
}

int main()
{
	Trapezium T1;
	int a1, b1, a2, b2, a3, b3, a4, b4;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
	T1.initial(a1, b1, a2, b2, a3, b3, a4, b4);
	cout << T1.Area();
	return 0;
}