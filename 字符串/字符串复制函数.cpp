#include<iostream>
using namespace std;

void copychar(char a[100], char b[100])
{
	for (int i = 0; i < 100; i++)
	{
		if (a[i] != '\0')
		{
			b[i] = a[i];
		}
		else
			b[i] = '\0';
	}
}

int main()
{
	char s1[100], s2[100];
	cin.getline(s1, 100);
	copychar(s1, s2);
	cout << s2;
	return 0;
}