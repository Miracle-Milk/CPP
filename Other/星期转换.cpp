#include<iostream>
using namespace std;

int main()
{
	enum xingqi
	{
		monday=1, tuesday, wednesday, thursday, friday, saturday, sunday
	};
	int a;
	cin >> a;
	if (a < 1 || a>7)
	{
		cout << "invalid";
		return 0;
	}
	switch ((xingqi)a)
	{
	case monday:cout << "monday"; break;
	case tuesday:cout << "tuesday"; break;
	case wednesday:cout << "wednesday"; break;
	case thursday:cout << "thursday"; break;
	case friday:cout << "friday"; break;
	case saturday:cout << "saturday"; break;
	case sunday:cout << "sunday"; break;
	}
	return 0;
}