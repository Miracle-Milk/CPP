#include<iostream>
using namespace std;

void strCopy(char a[], char b[])	//�ַ������ƺ��� bΪԭ�ַ�
{
	char* p = a;
	char* q = b;
	while (* q || * p)
	{
		*p = *q;
		p++;
		q++;
	}
}

void swap(char a[], char b[])		//�ַ�������
{
	char temp[20] = {};
	strCopy(temp, a);
	strCopy(a, b);
	strCopy(b, temp);
}

bool judge(char a[], char b[])		//�ж��ַ���a�Ƿ���b��
{
	char* p = a;
	char* q = b;
	char s1, s2;	//�����ʱ�ַ� ����ת����Сд���бȽ��ַ��Ҳ��ı�ԭ�ַ���
	while (*p && *q)
	{
		s1 = *p;
		s2 = *q;
		if (*p >= 'A' && *p <= 'Z') 
			s1 = *p + 32;
		if (*q >= 'A' && *q <= 'Z') 
			s2 = *q + 32;
		if (s1 < s2)
			return false;
		if (s1 > s2)
			return true;
		p++;
		q++;
	}
	if (*p)		//a��b�� ����true
		return true;
	if (*q)
		return false;
}

void sort(char a[][20], int n)		//����ð��
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (judge(a[i], a[j]))
			{
				swap(a[i], a[j]);
			}
		}
	}
}

int main()
{
	char s[100][20] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	sort(s, n);
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << endl;
	}
	return 0;
}