#include<iostream>
using namespace std;

int main() 
{
	int a;
	cin >> a;
	switch (a / 10)
	{
	case 10:
	case 9:cout << "5"; break;
	case 8:cout << "4"; break;
	case 7:cout << "3"; break;
	case 6:cout << "2"; break;
	case 0:cout << "0"; break;
	default:cout << "1";
	}
	return 0;
}