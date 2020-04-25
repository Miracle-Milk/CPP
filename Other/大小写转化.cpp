#include<iostream>
using namespace std;

int main()
{
	char a;
	cin >> a;
	int(a) >= 65 && int(a) <= 90 ? a = a + 32 : a = a;
	int(a) >= 97 && int(a) <= 122 ? a = a - 32 : a = a;
	cout << a;
	return 0;
}