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
	p2 = &p1;		//����ָ��ָ��������
	p2->speak();	//���û����speak����
	p2 = &c1;		//����ָ��ָ��������è����
	p2->speak();	//����������èspeak����
	p2 = &d1;		//����ָ��ָ�������๷����
	p2->speak();	//���������๷speak����
	return 0;
}