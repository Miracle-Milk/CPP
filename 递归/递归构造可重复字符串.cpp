#include<iostream>
using namespace std;

void function(char* p, int m, int n, int a)		//a为当前指针下标
{
	if (a == n)
	{
		cout << p << endl;
	}
	else
	{
		for (int i = 65; i < 65 + m; i++)
		{
			p[a] = i;
			function(p, m, n, a + 1);			//
		}
	}
}

int main()
{
	int m, n;		//m个字母中输出n个
	cin >> m >> n;
	char* p = new char[n + 1];
	p[n] = '\0';
	function(p, m, n, 0);
	delete[]p;
	return 0;
}