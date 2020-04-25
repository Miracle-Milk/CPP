#include<iostream>
using namespace std;

int charlength(char a[500])
{
	int length = 1;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] == 32) && ((a[i+1] > 64 && a[i+1] < 91) || (a[i+1] > 96 && a[i+1] < 123)))
		{
			length++;
		}
	}
	return length;
}

int main()
{
	char a[500];
	cin.getline(a, 500);
	cout << charlength(a);
	return 0;
}