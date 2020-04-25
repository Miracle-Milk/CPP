#include<iostream>
using namespace std;

/*      两个数排序
void paixu(int* a, int* b)
{
	int temp;
	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	return;
}

int main()
{
	int a, b;
	cin >> a >> b;
	paixu(&a, &b);
	cout << a << " " << b;
	return 0;
}
*/

//三个数排序
void paixujunior(int* a, int* b, int* c)
{
	if (*a > * b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if (*a > * c)
	{
		int temp;
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if (*b > * c)
	{
		int temp;
		temp = *b;
		*b = *c;
		*c = temp;
	}
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	paixujunior(&a, &b, &c);
	cout << a << " " << b << " " << c;
	return 0;
}