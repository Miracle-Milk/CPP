#include<iostream>
using namespace std;

int main()
{
	int n, peach = 1;
	cin >> n;
	for (int i = n; i > 1; i--)
	{
		peach = 2 * (peach + 1);
	}
	cout << peach;
	return 0;
}