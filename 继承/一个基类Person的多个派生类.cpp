#include<iostream>
#include<cstring>
using namespace std;

class Person
{
protected:
	char Name[10];
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
	cout << "���� " << Name << endl;
	if (Sex == 'f')
	{
		cout << "�Ա� Ů" << endl;
	}
	else
	{
		cout << "�Ա� ��" << endl;
	}
	cout << "���� " << Age << endl;
}

class Teacher:public Person
{
public:
	Teacher(char* dept, int salary, char* name, int age, char sex);
	~Teacher();
	void ShowMe();
private:
	char Dept[20];
	int Salary;
};

Teacher::Teacher(char* dept, int salary, char* name, int age, char sex)
{
	strcpy(Dept, dept);
	this->Salary = salary;
	Person::Register(name, age, sex);
}

Teacher::~Teacher()
{
}

void Teacher::ShowMe()
{
	Person::ShowMe();
	cout << "������λ " << Dept << endl;
	cout << "��н " << Salary << endl;
}

class Student:public Person
{
public:
	Student(char* name, int age, char sex, char* id, char* classid);
	~Student();
	void ShowMe();
private:
	char ID[12];
	char Class[12];
};

Student::Student(char* name, int age, char sex, char* id, char* classid)
{
	Person::Register(name, age, sex);
	strcpy(ID, id);
	strcpy(Class, classid);
}

Student::~Student()
{
}

void Student::ShowMe()
{
	cout << "ѧ�� " << ID << endl;
	Person::ShowMe();
	cout << "�༶ " << Class << endl;
}

int main()
{
	char name[20], dept[20], id[12], cls[12];
	int age, salary;
	char sex;
	cin >> name >> age >> sex >> dept >> salary;
	Teacher teach1(dept, salary, name, age, sex);
	teach1.ShowMe();
	cin >> name >> age >> sex >> id >> cls;
	Student stu1(name, age, sex, id, cls);
	stu1.ShowMe();
	return 0;
}