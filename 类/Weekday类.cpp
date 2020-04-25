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

void Weekday::setDay(int d)		//�����ܼ�
{
	day = d;
}

void Weekday::incDay()			//��һ�� ����6��ʱ��-7 �ص���һ��
{
	day = day + 1;
	if (day > 6)
	{
		day = day - 7;
	}
}

void Weekday::nowDay()			//��ӡ���ڵ�����
{
	switch (day)
	{
	case 0:cout << "������" << endl; break;
	case 1:cout << "����һ" << endl; break;
	case 2:cout << "���ڶ�" << endl; break;
	case 3:cout << "������" << endl; break;
	case 4:cout << "������" << endl; break;
	case 5:cout << "������" << endl; break;
	case 6:cout << "������" << endl; break;
	}
}

Weekday::Weekday()
{
}

Weekday::~Weekday()
{
}

void printDay(Weekday w)		//��ӡ����
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