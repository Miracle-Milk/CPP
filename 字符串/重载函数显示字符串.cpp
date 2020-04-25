#include<iostream>
#include<cstring>
using namespace std;

void print_spaced(char a[])
{
	int n;
	for (int i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
			n = i;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			cout << a[i] << endl;
		else
			cout << a[i] << " ";
	}
}

void print_spaced(string b)
{

}

int main()
{
	char a[100];
	cin.getline(a, 100);
	string b;
	cin >> b;
}