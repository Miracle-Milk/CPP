#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void conversionSwitch(char a[])		//二进制转化为十进制
{
	int n = 0;
	for (int i = 0; i < strlen(a); i++) 
	{
		n += (a[i] - '0') * pow(2, strlen(a) - i - 1);
	}
	cout << n;
}

void getIP(char a[])
{
	int j = 0;
	char ip[10];
	for (int i = 0; i < 40; i++)
	{
		if (j == 8)			//将字符串每八个字符分为一组
		{
			ip[j] = '\0';
			conversionSwitch(ip);
			if (i < 30)
			{
				cout << ".";
			}
			j = 0;
		}
		ip[j] = a[i];
		j++;
		if (a[i] == '\0')
		{
			break;
		}
	}
}

int main()
{
	char ip[40];
	cin.getline(ip,40);
	getIP(ip);
	return 0;
}