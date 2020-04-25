#include<iostream>
using namespace std;

int lenth(char a[100])
{
	int i = 0;
	for (int j = 0; j < 100; j++)
	{
		if (a[i] != '\0')
			i++;
		else
			return i;
	}
}

int main()
{
	char a[100];
	cin.getline(a, 100);
	cout << lenth(a);
	return 0;
}