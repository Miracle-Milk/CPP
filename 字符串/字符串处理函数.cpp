#include<iostream>
using namespace std;

void charchange(char a[100])
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != 32 && !((a[i] > 64 && a[i] < 91) || (a[i] > 96 && a[i] < 123)))
		{
			for (int j = i; a[j] != '\0'; j++)
			{
				a[j] = a[j + 1];
			}
			i--;
		}
		else if (a[i] > 96 && a[i] < 123)
		{
			a[i] = a[i] - 32;
		}
	}
}

int main()
{
	char a[100];
	cin.getline(a, 100);
	charchange(a);
	cout << a;
	return 0;
}