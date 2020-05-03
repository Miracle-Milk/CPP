#include<iostream>
using namespace std;

#define PI 3.14159

class Shape							//基类
{
public:
	virtual void printName() = 0;	//纯虚函数,打印几何图形名称
	virtual double printArea() = 0;	//纯虚函数,打印几何图形面积
};

class Circle:public Shape			//派生类 圆
{
public:
	Circle(double r)
	{
		radius = r;
	}
	void printName()
	{
		cout << "圆:半径=" << radius << ",面积:" << printArea() << endl;
	}
	double printArea()
	{
		return PI * radius * radius;
	}
private:
	double radius;					//半径
};

class Square :public Shape			//派生类 正方形
{
public:
	Square(double e)
	{
		edge = e;
	}
	void printName()
	{
		cout << "正方形:边长=" << edge << ",面积:" << printArea() << endl;
	}
	double printArea()
	{
		return edge * edge;
	}
private:
	double edge;					//边
};

class Rectangle :public Shape		//派生类 长方形
{
public:
	Rectangle(double l, double w)
	{
		length = l;
		width = w;
	}
	void printName()
	{
		cout << "长方形:长=" << length << ",宽=" << width << ",面积:" << printArea() << endl;
	}
	double printArea()
	{
		return length * width;
	}
private:
	double length, width;			//长,宽
};

class Trapezoid :public Shape		//派生类 梯形
{
public:
	Trapezoid(double up, double down, double height)
	{
		this->up = up;
		this->down = down;
		this->height = height;
	}
	void printName()
	{
		cout << "梯形:上底=" << up << ",下底=" << down << ",高=" << height << ",面积:" << printArea() << endl;
	}
	double printArea()
	{
		return ((up + down) * height) / 2;
	}
private:
	double up, down, height;		//上底,下底,高
};

class Triangle :public Shape		//派生类 三角形
{
public:
	Triangle(double bass, double height)
	{
		this->bass = bass;
		this->height = height;
	}
	void printName()
	{
		cout << "三角形:底边=" << bass << ",高=" << height << ",面积:" << printArea() << endl;
	}
	double printArea()
	{
		return (bass * height) / 2;
	}
private:
	double bass, height;			//底,高
};

int main()
{
	double radius, edge, lenght, width, up, down, height, bass;
	cin >> radius;
	Circle C(radius);				//创建圆类
	cin >> edge;
	Square S(edge);					//创建正方形类
	cin >> lenght >> width;
	Rectangle R(lenght, width);		//创建长方形类
	cin >> up >> down >> height;
	Trapezoid Tra(up, down, height);//创建梯形类
	cin >> bass >> height;
	Triangle Tri(bass, height);		//创建三角形类
	C.printName();					//输出
	S.printName();
	R.printName();
	Tra.printName();
	Tri.printName();
	double area;
	area = C.printArea() + S.printArea() + R.printArea() + Tra.printArea() + Tri.printArea();
	cout << "总面积:" << area;
	return 0;
}