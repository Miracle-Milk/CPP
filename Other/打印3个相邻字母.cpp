#include<iostream>
using namespace std;

int main()
{
	char a1,a2,a3;
	cin >> a2;
	if (a2 == 65 || a2 == 97)
	{
		a1 = a2 + 25;
		a3 = a2 + 1;
		cout << a1 << a2 << a3;
	}
	else if (a2 == 90 || a2 == 122)
	{
		a1 = a2 - 1;
		a3 = a2 - 25;
		cout << a1 << a2 << a3;
	}
	else
	{
		a1 = a2 - 1;
		a3 = a2 + 1;
		cout << a1 << a2 << a3;
	}

	return 0;
}