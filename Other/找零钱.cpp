#include<iostream>
using namespace std;

int main()
{
	int money,wushi=0,ershi=0,shikuai=0,wukuai=0;
	int k = 32;
	cin >> money;
	wushi = money / 50;
	cout << wushi << char(k);
	if (wushi > 0)
		money = money % 50;
	ershi = money / 20;
	cout << ershi <<char(k);
	if (ershi > 0)
		money = money % 20;
	shikuai = money / 10;
	cout << shikuai <<char(k);
	if (shikuai > 0)
		money = money % 10;
	wukuai = money / 5;
	cout << wukuai << char(k);
	if (wukuai > 0)
		money = money % 5;
	cout << money ;
	return 0;
}