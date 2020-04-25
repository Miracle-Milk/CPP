#include<iostream>
#include<cmath>
using namespace std;

class COMPLEX
{
public:
	COMPLEX();
	~COMPLEX();
	void set(double r, double i);
	void show();
	COMPLEX add(COMPLEX a);
	double getReal();
	double getImag();
	double module();
private:
	double x, y;
};

void COMPLEX::set(double r, double i)	//��ֵ
{
	x = r;
	y = i;
}

void COMPLEX::show()					//��ӡ����
{
	if (y >= 0)
	{
		cout << x << "+" << y << "j";	//�鲿Ϊ����ʱ�Ӹ�+
	}
	else
	{
		cout << x << y << "j";
	}
}

COMPLEX COMPLEX::add(COMPLEX a)			//�����
{
	COMPLEX c;
	c.x = x + a.x;
	c.y = y + a.y;
	return c;
}

double COMPLEX::getReal()				//����ʵ��
{
	return x;
}

double COMPLEX::getImag()				//�����鲿
{
	return y;
}

double COMPLEX::module()				//���ظ�����ģ-->(ʵ����ƽ��+�鲿��ƽ��)����
{
	double s;
	s = x * x + y * y;
	s = sqrt(s);
	return s;
}

COMPLEX::COMPLEX()
{
}

COMPLEX::~COMPLEX()
{
}

int main()
{
	COMPLEX a, b, c;
	double x, y;
	cin >> x >> y;
	a.set(x, y);
	cin >> x >> y;
	b.set(x, y);
	c = a.add(b);
	c.show();
	cout << endl;
	cout << c.getReal() << endl;
	cout << c.getImag() << endl;
	cout << c.module() << endl;
	return 0;
}