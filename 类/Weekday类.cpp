#include<iostream>
using namespace std;

class Weekday
{
public:
	Weekday();
	~Weekday();
	void setDay(int);
	void incDay();
	void nowDay();
private:
	int day;
};

void Weekday::setDay(int d)		//设置周几
{
	day = d;
}

void Weekday::incDay()			//加一天 大于6的时候-7 回到第一天
{
	day = day + 1;
	if (day > 6)
	{
		day = day - 7;
	}
}

void Weekday::nowDay()			//打印现在的天数
{
	switch (day)
	{
	case 0:cout << "星期日" << endl; break;
	case 1:cout << "星期一" << endl; break;
	case 2:cout << "星期二" << endl; break;
	case 3:cout << "星期三" << endl; break;
	case 4:cout << "星期四" << endl; break;
	case 5:cout << "星期五" << endl; break;
	case 6:cout << "星期六" << endl; break;
	}
}

Weekday::Weekday()
{
}

Weekday::~Weekday()
{
}

void printDay(Weekday w)		//打印三天
{
	w.nowDay();
	w.incDay();
	w.nowDay();
	w.incDay();
	w.nowDay();
}

int main()
{
	Weekday W;
	int day;
	cin >> day;
	W.setDay(day);
	printDay(W);
	return 0;
}