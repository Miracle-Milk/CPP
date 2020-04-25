#include<iostream>
using namespace std;

void reset(int* a, int* b)
{
	if ((*a + *b) % 2 > 0)
	{
		*a = (*a + *b) / 2;
		*a = *a + 1;
	}
	else
	{
		*a = (*a + *b) / 2;
	}
	*b = *a;
}

int main()
{
	int a, b;
	cin >> a >> b;
	reset(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}