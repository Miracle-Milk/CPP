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
	Person* p;
	Person* q;
	int n, number = 0;
	cin >> n;
	p = new Person[n];
	q = p;
	cin >> q->Name;
	cin >> q->gender;
	cin >> q->age;
	while (strcmp(q->Name, "0") != 0 && strcmp(q->gender, "0") != 0 && q->age != 0)
	{
		number++;
		q++;
		cin >> q->Name;
		cin >> q->gender;
		cin >> q->age;
	}
	q = p + number - 1;
	while (q >= p)
	{
		cout << q->Name;
		cout << " " << q->gender;
		cout << " " << q->age << endl;
		q--;
	}
	delete[]p;
	return 0;
}