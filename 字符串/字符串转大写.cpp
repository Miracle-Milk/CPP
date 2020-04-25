#include<iostream>
using namespace std;

void Big(char a[100])
{
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
			break;
		if (a[i] > 96 && a[i] < 123)
		{
			a[i] = a[i] - 32;
		}
	}
}

int main()
{
	char a[100];
	cin.getline(a, 100);
	Big(a);
	cout << a;
	return 0;
}