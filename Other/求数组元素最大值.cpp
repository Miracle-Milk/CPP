#include<iostream>
using namespace std;

int main()
{
	int max = -9999, end = -9999, a[100];
	for (int i = 0; i < 100; i++)
	{
		int in;
		cin >> in;
		if (in != end)
			a[i] = in;
		if (in == end)
			break;
		if (max < in)
			max = in;
	}
	cout << max;
	return 0;
}