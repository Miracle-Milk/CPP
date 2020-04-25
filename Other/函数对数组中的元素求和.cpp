#include<iostream>
using namespace std;

void addarray(int a, int* sum)
{
	*sum += a;
}

int main()
{
	int sum = 0;
	int a;
	while (cin >> a)
	{
		if (a == -1)
			break;
		addarray(a, &sum);
	}
	cout << sum;
	return 0;
}