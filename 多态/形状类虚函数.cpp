#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14

class SHAPE		//����
{
public:
	SHAPE();
	SHAPE(double,double);
	~SHAPE();
	void set(double, double);
	virtual double area();		//�麯��
private:
	double x, y;
};

SHAPE::SHAPE()
{
	x = 0; y = 0;
}

SHAPE::SHAPE(double x, double y)
{
	this->x = x;
	this->y = y;
}

SHAPE::~SHAPE()
{
}

void SHAPE::set(double x, double y)
{
	this->x = x;
	this->y = y;
}

double SHAPE::area()
{
	return 0;
}

class CIRCLE:public SHAPE
{
public:
	CIRCLE();
	CIRCLE(double, double, double);
	~CIRCLE();
	void set(double, double, double);
	double area();
private:
	double radius;
};

CIRCLE::CIRCLE()
{
	SHAPE::set(0, 0);
	radius = 0;
}

CIRCLE::CIRCLE(double x, double y, double r)
{
	SHAPE::set(x, y);
	radius = r;
}

CIRCLE::~CIRCLE()
{
}

void CIRCLE::set(double x, double y, double r)
{
	SHAPE::set(x, y);
	radius = r;
}

double CIRCLE::area()
{
	return PI * radius * radius;
}

int main()
{
	SHAPE sp(1, 2);
	CIRCLE c(3, 4, 5);
	SHAPE* p;					//����ָ��p
	SHAPE& sp2 = c;				//��������Բ��
	p = &sp;					//����ָ��ָ�����ĵ�ַ
	cout << p->area() << endl;	//����ĺ���
	p = &c;						//����ָ��ָ��Բ��ĵ�ַ
	cout << p->area() << endl;	//Բ��ĺ���
	cout << sp2.area() << endl; //Բ��ĺ���
	return 0;
}