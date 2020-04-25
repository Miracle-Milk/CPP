#include<iostream>
#include<string.h>
using namespace std;

class VEHICLE
{
public:
	VEHICLE();
	VEHICLE(char*,char*);
	~VEHICLE();
	void set(char*,char*);
	void show();
private:
	char number[20];
	char owner[20];
};

VEHICLE::VEHICLE()
{
	strcpy_s(number, "00000");
	strcpy_s(owner, "unknown");
}

VEHICLE::VEHICLE(char* a, char* b)
{
	strcpy_s(number, a);
	strcpy_s(owner, b);
}

VEHICLE::~VEHICLE()
{
}

void VEHICLE::set(char* a, char* b)
{
	strcpy_s(number, a);
	strcpy_s(owner, b);
}

void VEHICLE::show()
{
	cout << "Number:" << number << " owner:" << owner;
}

class BUS:VEHICLE
{
public:
	BUS();
	BUS(char*,char*,int);
	~BUS();
	void set(char*,char*,int);
	void show();
private:
	int seats;
};

BUS::BUS()
{
	VEHICLE::set("00000", "unknown");
	seats = 0;
}

BUS::BUS(char* a, char* b, int s)
{
	VEHICLE::set(a, b);
	seats = s;
}

BUS::~BUS()
{
}

void BUS::set(char* a, char* b, int s)
{
	VEHICLE::set(a, b);
	seats = s;
}

void BUS::show()
{
	VEHICLE::show();
	cout << " seats:" << seats;
}

int main()
{
	BUS a, b("SHAN-1234567", "ZhangSan", 40);
	char number[20], name[20];
	int seats;
	a.show(); cout << endl;
	b.show(); cout << endl;
	cin >> number >> name >> seats;
	a.set(number, name, seats);
	a.show(); cout << endl;
	return 0;
}