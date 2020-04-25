#include<iostream>
using namespace std;

class Vector
{
public:
	Vector();
	Vector(int);
	~Vector();
	void show();
private:
	int* p;		
	int n;
};

void Vector::show()		//输出向量
{
	if (n > 0)
	{
		int* q = p;
		cout << *q;
		q++;
		while (q < p + n)
		{
			cout << " " << *q;
			q++;
		}
	}
}

Vector::Vector(int m)	//申请m个空间的数组
{
	n = m;
	p = new int[n];		
	int* q = p;			
	while (q < p + n)	
	{
		*q = 0; q++;
	}
}

Vector::Vector()		//默认构造函数 申请10个空间的数组
{
	n = 10;
	p = new int[n];		//动态申请n个数的数组
	int* q = p;			//指针q指向数组的第一个元素
	while (q < p + n)	//赋值数组的n个元素为0
	{
		*q = 0; q++;
	}
}

Vector::~Vector()
{
	delete[]p;
}

int main()
{
	Vector a, b(5);		//定义两个对象,a用默认构造函数,b用有参构造函数
	a.show(); cout << endl;
	b.show(); cout << endl;
	return 0;
}