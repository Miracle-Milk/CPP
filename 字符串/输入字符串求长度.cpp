#include<iostream>
using namespace std;

int main()
{
	char a[100];
	cin.getline(a,100);
	int lenth = 0;
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
			break;
		else lenth++;
	}
	cout << lenth;
	return 0;
}