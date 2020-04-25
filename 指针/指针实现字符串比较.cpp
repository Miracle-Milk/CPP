#include<iostream>
using namespace std;

int mystrcmp(char* s1, char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	int k = *s1 - *s2;
	if (k < 0)
		return -1;
	else if (k > 0)
		return 1;
}

void chang(char* s)//´óÐ¡Ð´×ª»»
{
	while (*s != '\0')
	{
		if (*s > 96 && *s < 123)
		{
			*s = *s - 32;
			s++;
		}
		else
			s++;
	}
}

int main()
{
	char a[100] = {}, b[100] = {};
	char* p1 = a;
	char* p2 = b;
	char temp;
	cin >> a;
	cin >> b;
	chang(p1);
	chang(p2);
	cout << mystrcmp(p1, p2);
	return 0;
}