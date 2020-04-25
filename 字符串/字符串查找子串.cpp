#include<iostream>
using namespace std;

int search(char a[],int i,char b[])
{
	int j = 0;
	for (i; i < 100; i++)
	{
		if (a[i] == b[j] && b[j] != '\0')
		{
			j++;
		}
		else if (a[i] != b[j] && b[j] != '\0')
		{
			return 0;
			break;
		}
		else if (b[j] == '\0')
			return 1;
	}
}

int main()
{
	char a[100], b[100];
	cin.getline(a, 100);
	cin.getline(b, 100);
	int j = 0;
	int T = 0;
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
			break;
		if (a[i] = b[j])
		{
			if (search(a, i, b))
			{
				T = 1;
				cout << i + 1;
				break;
			}
		}
	}
	if (T == 0)
		cout << "没有该子串";
	return 0;
}