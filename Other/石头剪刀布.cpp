#include<iostream>
using namespace std;

int main()
{
	char shitou[10] = "ʯͷ", jiandao[10] = "����", bu[10] = "��", unknow[10] = "����ʶ";
	int a;
	cin >> a;
	if (a == 1 || a == 2 || a == 3)
	{
		(a == 1) ? cout << shitou : (a == 2) ? cout << jiandao : cout << bu;
	}
	else
		cout << unknow;
	return 0;
}