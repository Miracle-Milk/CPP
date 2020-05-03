#include<iostream>
using namespace std;

class Complex
{
public:
	Complex()
	{
		x = 0; y = 0;
	}
	Complex(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	Complex operator+(Complex b)	//�Ӻ�����
	{
		Complex c;
		c.x = this->x + b.x;
		c.y = this->y + b.y;
		return c;
	}
	Complex operator=(Complex b)	//�Ⱥ�����
	{
		this->x = b.x;
		this->y = b.y;
		return *this;
	}
	void print()
	{
		cout << x << "+" << "j" << y << endl;
	}
private:
	double x, y;	//ʵ��x,�鲿y
};

int main()
{
	double x, y;
	cin >> x >> y;
	Complex C1(x, y);		//��ʼ������1
	cin >> x >> y;
	Complex C2(x, y);		//��ʼ������2
	Complex C3;				//��ʼ������3
	C3 = C1 + C2;			//������1��2�ĺ͸�ֵ��3
	C1.print();				//���
	C2.print();
	C3.print();
	return 0;
}