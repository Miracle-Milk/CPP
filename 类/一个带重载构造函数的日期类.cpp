#include<iostream>
using namespace std;

class DATE
{
public:
	DATE();
	DATE(int,int,int);
	~DATE();
	void show();
	void set(int,int,int);
private:
	int year, month, day;
};

DATE::DATE()
{
	year = 1900;
	month = 1;
	day = 1;
}

DATE::DATE(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

DATE::~DATE()
{
}

void DATE::set(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

void DATE::show()
{
	cout << year << "-" << month << "-" << day;
}

int main()
{
	DATE day1, day2(2100, 12, 12);
	day1.show(); cout << endl;
	day2.show(); cout << endl;
	int year, month, day;
	cin >> year >> month >> day;
	day1.set(year, month, day);
	day1.show();
	return 0;
}