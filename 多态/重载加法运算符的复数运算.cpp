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
	Complex operator+(Complex b)	//加号重载
	{
		Complex c;
		c.x = this->x + b.x;
		c.y = this->y + b.y;
		return c;
	}
	Complex operator=(Complex b)	//等号重载
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
	double x, y;	//实部x,虚部y
};

int main()
{
	double x, y;
	cin >> x >> y;
	Complex C1(x, y);		//初始化虚数1
	cin >> x >> y;
	Complex C2(x, y);		//初始化虚数2
	Complex C3;				//初始化虚数3
	C3 = C1 + C2;			//将虚数1和2的和赋值给3
	C1.print();				//输出
	C2.print();
	C3.print();
	return 0;
}