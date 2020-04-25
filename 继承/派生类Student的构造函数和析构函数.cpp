#include<iostream>
#include<cstring>
using namespace std;

class Person
{
public:
	Person();
	Person(char* name, int age);
	~Person();

private:
	char Name[10]; //����
	int Age; //����
};

Person::Person()
{
}

Person::Person(char* name, int age)
{
	strcpy_s(Name, name);
	Age = age;
	cout << "constructor of person " << Name << endl;
}

Person::~Person()
{
	cout << "deconstructor of person " << Name << endl;
}

class Student:public Person
{
public:
	Student();
	~Student();
	Student(char* name, int age, char* classname, char* name1, int age1); //name1��age1�ǰ೤����Ϣ
private:
	char ClassName[10]; //�༶
	Person Monitor; //�೤
};

Student::Student()
{
}

Student::Student(char* name, int age, char* classname, char* name1, int age1):Person(name,age),Monitor(name1,age1)
{
	strcpy_s(ClassName, classname);
	cout << "constructor of Student" << endl;
}

Student::~Student()
{
	cout << "deconstructor of Student" << endl;
}

int main()
{
	char name[10], name1[10], classname[10];
	int age, age1;
	cin >> name >> age >> classname >> name1 >> age1;
	Student stu1(name, age, classname, name1, age1);
	return 0;
}