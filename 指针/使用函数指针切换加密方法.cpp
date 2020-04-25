#include<iostream>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

void caesar(char s[])						//ø≠»ˆº”√‹
{
	for (int i = 0; i < 100; i++)
	{
		if (s[i] > 64 && s[i] < 88)
			s[i] = s[i] + 35;
		else if (s[i] > 96 && s[i] < 120)
			s[i] = s[i] - 29;
		else if (s[i] > 87 && s[i] < 91)
			s[i] = s[i] + 9;
		else if (s[i] > 119 && s[i] < 123)
			s[i] = s[i] - 55;
	}
}

void oddeven(char s[])						//∆Ê≈º±‰ªØ
{
	char a1[50] = {}, a2[50] = {};
	int j = 0;
	for (int i = 0; i < 50; i++)
	{
		if (s[j] > 0)
		{
			a1[i] = s[j];
			j += 2;
		}
		else
			break;
	}
	j = 1;
	for (int i = 0; i < 50; i++)
	{
		if (s[j] > 0)
		{
			a2[i] = s[j];
			j += 2;
		}
		else
			break;
	}
	j = 0;
	for (int i = 0; i < 100; i++)
	{
		if (a1[i] != '\0')
		{
			s[i] = a1[i];
		}
		else
		{
			j = i;
			break;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		s[j] = a2[i];
		j++;
		if (a2[i] == '\0')
			break;
	}
}

void cipher(void (*f)(char s[]), char s[])
{
	return f(s);
}

int main()
{
	char a[100];
	cin.getline(a, 100);
	int i;
	cin >> i;
	if (i == 1)
	{
		cipher(caesar, a);
	}
	if (i == 2)
	{
		cipher(oddeven, a);
	}
	cout << a;
	return 0;
}