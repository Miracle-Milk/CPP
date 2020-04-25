#include<iostream>
using namespace std;

void conversionSwitch(int a);
void print(int a);
int judge(int a);

void getNumber(char* a)		//���ַ���ip�л�ȡ����
{
	int ip = 0;
	for (int i = 0; i < 20; i++)
	{
		if (a[i] == '\0')	//���һ��û�е�
		{
			conversionSwitch(ip);
			break;
		}
		if (a[i] == '.')	//ÿ�������һ��
		{
			conversionSwitch(ip);
			ip = 0;
		}
		else if (a[i] >= '0' && a[i] <= '9')
		{
			ip = (ip * 10) + (a[i] - 48);
		}
	}
}

void conversionSwitch(int a)	//ʮ����ת���ɶ�����
{
	int ip = 0, j = 1;
	while (a)
	{
		ip = ip + j * (a % 2);
		a = a / 2;
		j = j * 10;
	}
	print(ip);
}

void print(int a)		//��ӡ
{
	int digit;
	digit = judge(a);
	switch (digit)		//Ϊ�����λ�����ֲ���0
	{
	case 0:cout << "00000000"; break;
	case 1:cout << "0000000" << a; break;
	case 2:cout << "000000" << a; break;
	case 3:cout << "00000" << a; break;
	case 4:cout << "0000" << a; break;
	case 5:cout << "000" << a; break;
	case 6:cout << "00" << a; break;
	case 7:cout << "0" << a; break; 
	case 8:cout << a; break;
	}
}

int judge(int a)	//��ȡλ��
{
	int num = 0;
	while (a)
	{
		a = a / 10;
		num++;
	}
	return num;
}

int main()
{
	char ip[20];
	cin >> ip;
	getNumber(ip);
	return 0;
}