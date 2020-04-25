#include<iostream>
#include<cstring>
using namespace std;

class Person
{
public:
	Person();
	~Person();
	void Register(char*, int, char);
	void ShowMe();
private:
	char Name[10];
	char Sex;
	int Age;
};

Person::Person()
{
}

Person::~Person()
{
}

void Person::Register(char* name, int age, char sex)
{
	strcpy_s(Name, name);
	this->Sex = sex;
	this->Age = age;
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
	Teacher();
	Teacher(char*, int, char, char*, int);
	~Teacher();
	void Show(); //��ʾ�������ݳ�Ա
protected:
	char Dept[20];
	int Salary;
};

Teacher::Teacher()
{
}

Teacher::Teacher(char* name, int age, char sex, char* dept, int salary)
{
	Person::Register(name, age, sex);
	strcpy_s(Dept, dept);
	this->Salary = salary;
}

Teacher::~Teacher()
{
}

void Teacher::Show()
{
	Person::ShowMe();
	cout << "������λ " << Dept << endl;
	cout << "��н " << Salary << endl;
}

class Student:public Person
{
public:
	Student();
	Student(char*, int, char, char*, char*);
	~Student();
	void Show();//��ʾ�������ݳ�Ա
private:
	char ID[12];
	char Class[12];
};

Student::Student()
{
}

Student::Student(char* name, int age, char sex, char* ID, char* Class)
{
	Person::Register(name, age, sex);
	strcpy_s(this->ID, ID);
	strcpy_s(this->Class, Class);
}

Student::~Student()
{
}

void Student::Show()
{
	cout << "�༶ " << Class << endl;
	cout << "ѧ�� " << ID << endl;
	Person::ShowMe();
}

class Graduate:public Student,public Teacher
{
public:
	Graduate();
	Graduate(char*, int, char, char*, int, char*, char*);
	~Graduate();
	void ShowMe();
private:
	
};

Graduate::Graduate()
{
}

Graduate::Graduate(char* name, int age, char sex, char* dept, int salary, char* id, char* classid):Teacher(name,age,sex,dept,salary),Student(name,age,sex,id,classid)
{
	
}

Graduate::~Graduate()
{
}

void Graduate::ShowMe()
{
	Student::Show();
	cout << "������λ " << Dept << endl;
	cout << "��н " << Salary << endl;
}

int main()
{
	char name[10], dept[20], sex, id[12], classid[12];
	int age, salary;
	cin >> name >> age >> sex >> dept >> salary >> id >> classid;
	Graduate G1(name, age, sex, dept, salary, id, classid);
	G1.ShowMe();
	return 0;
}