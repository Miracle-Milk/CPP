#include<iostream>
using namespace std;

struct Person
{
	char NAME[40];
	char gender[10];	//ĞÔ±ğ
	int age;
};

int main()
{
	Person one;
	Person* p;
	p = &one;
	cin >> p->NAME;
	cin >> p->gender;
	cin >> p->age;
	cout << p->NAME;
	cout << " " << p->gender;
	cout << " " << p->age;
	return 0;
}