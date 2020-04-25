#include<iostream>
using namespace std;

class Time
{
public:
	Time();
	~Time();
	void setTime(int h, int m, int s);
	void print_12();
	void print_24();
private:
	int hour;
	int minute;
	int second;
};

void Time::setTime(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time::print_12()
{
	bool AM = true;
	int tempTime = hour;
	if (hour >= 12 && hour != 24)		//PM
	{
		tempTime = hour - 12;
		AM = false;
	}
	if (hour == 24)
	{
		tempTime = 0;
	}
	if (tempTime < 10 )
	{
		cout << "0" << tempTime;
	}
	else
	{
		cout << tempTime;
	}
	if (minute < 10)
	{
		cout << ":0" << minute;
	}
	else
	{
		cout << ":" << minute;
	}
	if (second < 10)
	{
		cout << ":0" << second;
	}
	else
	{
		cout << ":" << second;
	}
	if (AM)
	{
		cout << " AM" << endl;
	}
	else
	{
		cout << " PM" << endl;
	}
	
}

void Time::print_24()
{
	if (hour == 24)
	{
		hour = 0;
	}
	if (hour < 10)
	{
		cout << "0" << hour;
	}
	else
	{
		cout << hour;
	}
	if (minute < 10)
	{
		cout << ":0" << minute;
	}
	else
	{
		cout << ":" << minute;
	}
	if (second < 10)
	{
		cout << ":0" << second;
	}
	else
	{
		cout << ":" << second;
	}
}

Time::Time()
{
}

Time::~Time()
{
}

int main()
{
	Time t;
	int h, m, s;
	cin >> h >> m >> s;
	t.setTime(h, m, s);
	t.print_12();
	t.print_24();
	return 0;
}