#include<iostream>
#include<cmath>
using namespace std;

class RECT
{
public:
	RECT();
	~RECT();
	void set(double a1, double b1, double a2, double b2);
	void showinfo();
	void show();
	double perimeter();
	double area();
private:
	double x1, y1, x2, y2;
};

void RECT::set(double a1, double b1, double a2, double b2)	//��ֵ
{
	x1 = a1;
	y1 = b1;
	x2 = a2;
	y2 = b2;
}

void RECT::showinfo()	//��ӡ������Ϣ
{
	cout << "(" << x1 << "," << y1 << "," << x2 << "," << y2 << ")";
}

void RECT::show()
{
	for (int i = 0; i < abs(y2 - y1); i++)		//ȡ����ֵ
	{
		for (int j = 0; j < abs(x2 - x1); j++)	//ȡ����ֵ
		{
			cout << "*";
		}
		cout << endl;
	}
}

double RECT::perimeter()	//�ܳ�
{
	double s;
	s = 2 * abs(y2 - y1) + 2 * abs(x2 - x1);	//ȡ����ֵ
	return s;
}

double RECT::area()			//���
{
	double a;
	a = abs(y2 - y1) * abs(x2 - x1);			//ȡ����ֵ
	return a;
}

RECT::RECT()
{
}

RECT::~RECT()
{
}

int main()
{
	RECT a;
	double x1, y1, x2, y2;
	//while (true)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		a.set(x1, y1, x2, y2);
		a.showinfo(); cout << endl;
		cout << a.perimeter() << endl;
		cout << a.area() << endl;
		a.show();
	}
	return 0;
}