#include<iostream>
using namespace std;

class Pet
{
public:
	virtual void speak()
	{
		cout << "How does a pet speak?" << endl;
	}
};

class Cat:public Pet
{
public:
	void speak()
	{
		cout << "miao!miao!" << endl;
	}
};

class Dog:public Pet
{
public:
	void speak()
	{
		cout << "wang!wang!" << endl;
	}
};

int main()
{
	Pet p1;
	Dog d1;
	Cat c1;
	Pet* p2;
	p2 = &p1;		//基类指针指向基类对象
	p2->speak();	//调用基类的speak函数
	p2 = &c1;		//基类指针指向派生类猫对象
	p2->speak();	//调用派生类猫speak函数
	p2 = &d1;		//基类指针指向派生类狗对象
	p2->speak();	//调用派生类狗speak函数
	return 0;
}