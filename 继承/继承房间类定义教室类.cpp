#include<iostream>
#include<string.h>
using namespace std;

class ROOM
{
public:
	ROOM();
	ROOM(char*);
	~ROOM();
	void set(char*);
	void show();
private:
	char number[20];
};

ROOM::ROOM()
{
	strcpy_s(number, "0000");
}

ROOM::ROOM(char* a)
{
	strcpy_s(number, a);
}

ROOM::~ROOM()
{
}

void ROOM::set(char* a)
{
	strcpy_s(number, a);
}

void ROOM::show()
{
	cout << "Number:" << number;
}

class CLASSROOM:ROOM
{
public:
	CLASSROOM();
	CLASSROOM(char*,int);
	~CLASSROOM();
	void set(char*,int);
	void show();
private:
	int seats;
};

CLASSROOM::CLASSROOM()
{
	ROOM::set("0000");
	seats = 0;
}

CLASSROOM::CLASSROOM(char* a, int s)
{
	ROOM::set(a);
	seats = s;
}

CLASSROOM::~CLASSROOM()
{
}

void CLASSROOM::set(char* a, int s)
{
	ROOM::set(a);
	seats = s;
}

void CLASSROOM::show()
{
	ROOM::show();
	cout << " seats:" << seats;
}

int main()
{
	CLASSROOM a, b("¹¤³Ì¹Ý505", 130);
	char num[20];
	int s;
	a.show(); cout << endl;
	b.show(); cout << endl;
	cin >> num >> s;
	a.set(num, s);
	a.show(); cout << endl;
	return 0;
}