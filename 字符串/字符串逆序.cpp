#include<iostream>
using namespace std;

int main()
{
	char a1[100] = "";
	int lenth = 0;
	cin.getline(a1, 100);
	for (int i = 0; i < 100; i++)
	{
		if (a1[i] != '\0')
			lenth++;
		else
			break;
	}
	int j = 0;
	for (int i = lenth - 1; i >= (lenth/2); i--)
	{
		int temp = 0;
		temp = a1[j];
		a1[j] = a1[i];
		a1[i] = temp;
		j++;
	}
	cout << a1;
	return 0;
}