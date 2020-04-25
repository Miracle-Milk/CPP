#include<iostream>
#include<cmath>
using namespace std;

class Rect
{
public:
	Rect();
	Rect(double, double, double, double);
	Rect(const Rect&);
	~Rect();
	void set(double, double, double, double);
	void showinfo();
	void show();
	double perimeter();
	double area();
private:
	double x1, y1, x2, y2;
};

void Rect::set(double x1, double y1, double x2, double y2)	//赋值
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

void Rect::showinfo()	//打印矩形信息
{
	cout << "(" << x1 << "," << y1 << "," << x2 << "," << y2 << ")";
}

void Rect::show()
{
	for (int i = 0; i < abs(y2 - y1); i++)		//取绝对值
	{
		for (int j = 0; j < abs(x2 - x1); j++)	//取绝对值
		{
			cout << "*";
		}
		cout << endl;
	}
}

double Rect::perimeter()	//周长
{
	double s;
	s = 2 * abs(y2 - y1) + 2 * abs(x2 - x1);	//取绝对值
	return s;
}

double Rect::area()			//面积
{
	double a;
	a = abs(y2 - y1) * abs(x2 - x1);			//取绝对值
	return a;
}

Rect::Rect(double x1, double y1, double x2, double y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

Rect::Rect(const Rect& a)
{
	this->x1 = a.x1;
	this->y1 = a.y1;
	this->x2 = a.x2;
	this->y2 = a.y2;
}

Rect::Rect()
{
	x1 = 0; y1 = 0; x2 = 0; y2 = 0;
}

Rect::~Rect()
{
	showinfo();
	cout << "deconstruct" << endl;
}

int main()
{
	Rect a;
	double x1, y1, x2, y2;
	//while (1)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		a.set(x1, y1, x2, y2);
		a.showinfo(); cout << endl;
		cout << a.perimeter() << endl;
		cout << a.area() << endl;
		a.show();
	}
	Rect b(x1 + 2, y1, x2 + 2, y2);
	Rect c(b);
	c.showinfo(); cout << endl;
	cout << c.perimeter() << endl;
	cout << c.area() << endl;
	c.show();
	
	return 0;
}