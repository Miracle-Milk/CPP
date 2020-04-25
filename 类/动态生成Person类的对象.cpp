#include<iostream>
#include<cstring>
using namespace std;

class Person
{
public:
	Person();
	~Person();
	void Register(char n[], int, char);
	void showme();
private:
	char name[20];
	int age;
	char sex;
};

Person::Person()
{
	strcpy_s(name,"XXX");
	age = 0;
	sex = 'm';
}

Person::~Person()
{
	cout << "Now destroying the instance of Person" << endl;
}

void Person::Register(char n[], int age, char sex)
{
	this->age = age;
	this->sex = sex;
	strcpy_s(name, n);
}

void Person::showme()
{
	cout << name << " " << age << " " << sex ;
}

int main()
{
	Person* p1 = new Person;
	Person* p2 = new Person;
	cout << "person1:";
	p1->showme(); cout << endl;
	cout << "person2:";
	p2->showme(); cout << endl;
	char name[20];
	int age;
	char sex;
	cin >> name >> age >> sex;
	p1->Register(name, age, sex);
	p2->Register(name, age, sex);
	cout << "person1:";
	p1->showme(); cout << endl;
	cout << "person2:";
	p2->showme(); cout << endl;
	delete p1;
	delete p2;
	return 0;
}