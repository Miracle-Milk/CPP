#include<iostream>
#include<cstring>
using namespace std;

class Person
{
	char Name[20];
	char Sex;
	int Age;
public:
	void Register(char* name, int age, char sex);
	void ShowMe();
};

void Person::Register(char* name, int age, char sex)
{
	strcpy(Name, name);
	this->Age = age;
	this->Sex = sex;
}

void Person::ShowMe()
{
	cout << Name << " " << Age << " " << Sex;
}

class Student:public Person
{
public:
	Student();
	~Student();
	void RegisterStu(char* classname, int number, char* name, int age, char sex);
	void ShowStu();
private:
	int Number;
	char ClassName[10];
};

Student::Student()
{
}

Student::~Student()
{
}

void Student::RegisterStu(char* classname, int number, char* name, int age, char sex)
{
	strcpy(ClassName, classname);
	this->Number = number;
	Person::Register(name, age, sex);
}

void Student::ShowStu()
{
	cout << Number << " " << ClassName << " ";
	Person::ShowMe();
}

int main()
{
	char name[20], classname[10];
	int number, age;
	char sex;
	cin >> classname >> number >> name >> age >> sex;
	Student stu1;
	stu1.RegisterStu(classname, number, name, age, sex);
	stu1.ShowStu(); cout << endl;
	stu1.ShowMe();
	return 0;
}