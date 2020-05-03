#include<iostream>
#include<cstring>
using namespace std;

class Pet
{
public:
	Pet();
	~Pet();
	void setPet(char*, int, char*);
	void getName();
	void getAge();
	void getColor();
	virtual void getInfo() = 0;
	virtual void speak() = 0;
private:
	char Name[20];
	int Age;
	char Color[10];
};

Pet::Pet()
{
}

Pet::~Pet()
{
}

void Pet::setPet(char* name,int age,char* color)
{
	strcpy_s(Name, name);
	this->Age = age;
	strcpy_s(Color, color);
}

void Pet::getName()
{
	cout << Name;
}

void Pet::getAge()
{
	cout << Age;
}

void Pet::getColor()
{
	cout << Color;
}

class Cat:public Pet
{
public:
	Cat(char* name,int age,char* color)
	{
		Pet::setPet(name, age, color);
	}
	void speak()
	{
		cout << "miao!miao!";
	}
	void getInfo()
	{
		cout << "猫的名字:";
		getName(); cout << endl;
		cout << "猫的年龄:";
		getAge(); cout << endl;
		cout << "猫的颜色:";
		getColor(); cout << endl;
		cout << "猫的叫声:";
		speak();
		cout << endl;
	}
};

class Dog:public Pet
{
public:
	Dog(char* name,int age,char* color)
	{
		Pet::setPet(name, age, color);
	}
	void speak()
	{
		cout << "wang!wang!";
	}
	void getInfo()
	{
		cout << "狗的名字:";
		getName(); cout << endl;
		cout << "狗的年龄:";
		getAge(); cout << endl;
		cout << "狗的颜色:";
		getColor(); cout << endl;
		cout << "狗的叫声:";
		speak();
		cout << endl;
	}
};

int main()
{
	char name[20], color[10];
	int age;
	cin >> name >> age >> color;	//输入数据并初始化对象猫和狗
	Cat c1(name, age, color);
	cin >> name >> age >> color;
	Dog d1(name, age, color);
	Pet* p1;						//基类指针p1
	p1 = &c1;
	p1->getInfo();					//通过基类指针p1调用猫类的getinfo
	p1 = &d1;
	p1->getInfo();					//通过基类指针p1调用狗类的getinfo
	return 0;
}