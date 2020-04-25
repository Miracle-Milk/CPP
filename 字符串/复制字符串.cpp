#include<iostream>
using namespace std;

int main()
{
	char a1[100], a2[100] = "";
	cin.getline(a1, 100);
	for (int i = 0; i < 100; i++)
	{
		if (a1[i] != '\0')
		{
			a2[i] = a1[i];
		}
		else
			break;
	}
	cout << a2;
	return 0;
}