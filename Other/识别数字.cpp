#include<iostream>
using namespace std;

int getnum(char* a, char* b)	//字符串转化为数字
{
	int number = int(*a - '0');
	a++;
	while (*a != *b)
	{
		number *= 10;
		number += int(*a - '0');
		a++;
	}
	return number;
}

int getnumber(char a[], int n[])
{
	int cost = 0;
	char* q = a;
	while (*q)
	{
		if (*q >= '0' && *q <= '9')
		{
			char* p = q + 1;
			while (*p >= '0' && *p <= '9')	//寻找数字的结束
			{
				p++;
			}
			n[cost] = getnum(q, p);			//存入数组n
			if (*(q - 1) == '-')
				n[cost] = -n[cost];
			cost++;							//数字个数
			q = p;
		}
		else
			q++;
	}
	return cost;
}

int main()
{
	char a[100];
	cin.getline(a, 100);
	int number[50];
	int n = getnumber(a, number);
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			cout << number[i];
		else
			cout << number[i] << " ";
	}
	return 0;
}