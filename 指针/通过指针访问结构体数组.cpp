#include<iostream>
#include<cstring>
using namespace std;

struct Person
{
	char Name[40];
	char gender[10];
	int age;
};

int main()
{
	Person aclass[50];
	int number = 0;
	Person* p;
	p = aclass;
	cin >> p->Name;
	cin >> p->gender;
	cin >> p->age;
	while (strcmp(p->Name, "0") != 0 && strcmp(p->gender,"0") != 0 && p->age != 0)
	{
		number++;
		p++;
		cin >> p->Name;
		cin >> p->gender;
		cin >> p->age;
	}
	p = aclass + number - 1;	//p[number]=0,0,0
	while (p >= aclass)
	{
		cout << p->Name;
		cout << " " << p->gender;
		cout << " " << p->age << endl;
		p--;
	}
	return 0;
}