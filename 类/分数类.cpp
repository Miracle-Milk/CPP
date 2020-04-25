#include<iostream>
using namespace std;

class FRACTION
{
public:
	FRACTION();
	~FRACTION();
	void set(int x, int y);
	void show();	
	double real();
private:
	int a, b;
	void reduce();
};

void FRACTION::set(int x, int y)		//赋值
{
	a = x;
	b = y;
	if (a != 0)
	{
		reduce();
	}
}

void FRACTION::show()					//显示
{
	cout << a << "/" << b;
}

void FRACTION::reduce()					//约分并改变符号
{
	if (a < 0 && b < 0)
	{
		b = -b;
	}
	else if (a > 0 && b < 0)
	{
		a = -a;
		b = -b;
	}
	for (int i = b; i > 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			a = a / i;
			b = b / i;
		}
	}
}

double FRACTION::real()
{
	double s;
	if (a < 0)
	{
		s = double(-a) / double(b);
		return -s;
	}
	else
	{
		s = double(a) / double(b);
		return s;
	}
}

FRACTION::FRACTION()
{
}

FRACTION::~FRACTION()
{
}

int main()
{
	FRACTION a;
	int x, y;
	//while (true)
	{
		cin >> x >> y;
		a.set(x, y);
		a.show();
		cout << endl;
		cout << a.real() << endl;
	}
	return 0;
}