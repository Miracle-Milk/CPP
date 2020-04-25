#include<iostream>
using namespace std;

int main()
{
	int a[20];
	int* p;
	int n = 0;
	p = a;
	cin >> *p;
	while (*p != 9999)	//输入
	{
		n++;
		if (n == 20)		//数组已满
		{
			break;
		}
		p++;
		cin >> *p;
	}
	if (n > 0)			//数组不空
	{
		p = a;
		cout << *p;
		p++;
		while (p < a + n)
		{
			cout << " " << *p;
			p++;
		}
	}
	return 0;
}