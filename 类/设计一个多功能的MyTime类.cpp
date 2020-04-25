#include<iostream>
using namespace std;

class Time
{
public:
	Time();
	Time(int, int, int);
	~Time();
	void setTime(int, int, int);
	void print_12();
	void print_24();
	void timeChange(int, int, int, bool);
private:
	int hour, minute, second;
};

Time::Time()
{
	hour = 0; 
	minute = 0; 
	second = 0;
}

Time::Time(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

Time::~Time()
{
}

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
	if (tempTime < 10)
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

void Time::timeChange(int h, int m, int s,bool plus)
{
	if (plus)			//时间加
	{
		hour = hour + h;
		minute = minute + m;
		second = second + s;
		if (hour > 24)
		{
			hour -= 24;
		}
		if (minute >= 60)
		{
			minute -= 60;
			hour++;
		}
		if (second >= 60)
		{
			second -= 60;
			minute++;
		}
	}
	else			//时间减
	{
		hour -= h;
		minute -= m;
		second -= s;
		if (second < 0)
		{
			second += 60;
			minute--;
		}
		if (minute < 0)
		{
			minute += 60;
			hour--;
		}
		if (hour < 0)
		{
			hour += 24;
		}
	}
}

int main()
{
	Time t1, t2(8, 10, 30);
	t1.print_12();
	t1.print_24(); cout << endl;
	t2.print_12();
	t2.print_24(); cout << endl;
	int h, m, s;
	cin >> h >> m >> s;
	t1.setTime(h, m, s);
	cin >> h >> m >> s;
	t1.timeChange(h, m, s, true);
	t2.timeChange(h, m, s, false);
	t1.print_12();
	t1.print_24(); cout << endl;
	t2.print_12();
	t2.print_24(); cout << endl;
	return 0;
}