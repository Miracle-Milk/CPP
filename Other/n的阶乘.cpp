#include<iostream>
using namespace std;

int main()
{
	int a, sum = 1;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		sum = sum * i;
	}
	if (a == 0)
		cout << "1";
	else
		cout << sum;
	return 0;
}