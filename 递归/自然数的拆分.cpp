#include<iostream>
using namespace std;

int a[100], n;

void function(int dep, int per, int sum)
{
//dep�������(Ū�˼��������
//pre������һ����
//sum�����ۼӵ�ֵ
	if (sum == n)	//�������
	{
		cout << n << "=";
		for (int i = 1; i < dep; i++)
		{
			cout << a[i];
			if (i != dep - 1)
			{
				cout << "+";
			}
		}
		cout << endl;
	}
	//�ݹ�Ĳ���
	else
	{
		for (int i = per; i < n; i++)
		{
			if (sum + i <= n)
			{
				a[dep] = i;
				function(dep + 1, i, sum + i);
			}
		}
	}
}

int main()
{
	cin >> n;
	function(1, 1, 0);
	cout << n << "=" << n;
	return 0;
}