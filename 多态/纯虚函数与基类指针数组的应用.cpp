#include<iostream>
using namespace std;

#define PI 3.14159

class Shape							//����
{
public:
	virtual void printName() = 0;	//���麯��,��ӡ����ͼ������
	virtual double printArea() = 0;	//���麯��,��ӡ����ͼ�����
};

class Circle:public Shape			//������ Բ
{
public:
	Circle(double r)
	{
		radius = r;
	}
	void printName()
	{
		cout << "Բ:�뾶=" << radius << ",���:" << printArea() << endl;
	}
	double printArea()
	{
		return PI * radius * radius;
	}
private:
	double radius;					//�뾶
};

class Square :public Shape			//������ ������
{
public:
	Square(double e)
	{
		edge = e;
	}
	void printName()
	{
		cout << "������:�߳�=" << edge << ",���:" << printArea() << endl;
	}
	double printArea()
	{
		return edge * edge;
	}
private:
	double edge;					//��
};

class Rectangle :public Shape		//������ ������
{
public:
	Rectangle(double l, double w)
	{
		length = l;
		width = w;
	}
	void printName()
	{
		cout << "������:��=" << length << ",��=" << width << ",���:" << printArea() << endl;
	}
	double printArea()
	{
		return length * width;
	}
private:
	double length, width;			//��,��
};

class Trapezoid :public Shape		//������ ����
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
		cout << "����:�ϵ�=" << up << ",�µ�=" << down << ",��=" << height << ",���:" << printArea() << endl;
	}
	double printArea()
	{
		return ((up + down) * height) / 2;
	}
private:
	double up, down, height;		//�ϵ�,�µ�,��
};

class Triangle :public Shape		//������ ������
{
public:
	Triangle(double bass, double height)
	{
		this->bass = bass;
		this->height = height;
	}
	void printName()
	{
		cout << "������:�ױ�=" << bass << ",��=" << height << ",���:" << printArea() << endl;
	}
	double printArea()
	{
		return (bass * height) / 2;
	}
private:
	double bass, height;			//��,��
};

int main()
{
	double radius, edge, lenght, width, up, down, height, bass;
	cin >> radius;
	Circle C(radius);				//����Բ��
	cin >> edge;
	Square S(edge);					//������������
	cin >> lenght >> width;
	Rectangle R(lenght, width);		//������������
	cin >> up >> down >> height;
	Trapezoid Tra(up, down, height);//����������
	cin >> bass >> height;
	Triangle Tri(bass, height);		//������������
	C.printName();					//���
	S.printName();
	R.printName();
	Tra.printName();
	Tri.printName();
	double area;
	area = C.printArea() + S.printArea() + R.printArea() + Tra.printArea() + Tri.printArea();
	cout << "�����:" << area;
	return 0;
}