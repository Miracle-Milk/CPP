#include<iostream>
using namespace std;

char* mystrcpy(char* s1, char* s2)
{
	char* temp = s1;
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	s1 = temp;
	return s1;
}

int main()
{
	char a[100] = {};
	char b[100] = {};
	char* p2 = a;
	char* p1 = b;
	cin.getline(a, 100);
	cout << mystrcpy(p1, p2) << endl;
	return 0;
}