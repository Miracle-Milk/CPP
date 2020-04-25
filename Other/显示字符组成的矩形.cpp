#include<iostream>
using namespace std;

int main()
{
	int a, b;
	char c;
	cin >> a >> b >> c;
	for (int i = 0; i < a; i++) 
	{
		for (int i = 0; i < b; i++)
		{
			cout << c;
		}
		cout << endl;
	}
	return 0;
}