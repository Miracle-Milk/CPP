#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14

class CIRCLE
{
public:
	CIRCLE();
	~CIRCLE();
	void set(double x1, double y1, double r1);
	void show();
	double perimeter();
	double area();

private:
	double x, y;	//坐标
	double r;		//半径
};

void CIRCLE::set(double x1, double y1, double r1)	//输入数据
{
	x = x1;
	y = y1;
	r = r1;
}

void CIRCLE::show()									//打印
{
	cout << "(" << x << "," << y << "," << r << ")";
}

double CIRCLE::perimeter()							//计算周长
{
	double a;
	a = PI * 2 * r;
	return a;
}

double CIRCLE::area()								//计算面积
{
	double a;
	a = PI * r * r;
	return a;
}

CIRCLE::CIRCLE()
{
}

CIRCLE::~CIRCLE()
{
}

int main()
{
	CIRCLE a;
	double x, y, r;
	//while (true)
	{
		cin >> x >> y >> r;
		a.set(x, y, r);
		a.show(); cout << endl;
		cout << a.perimeter() << endl;
		cout << a.area() << endl;
	}
	return 0;
}