#include<iostream>
using namespace std;

int* newArray(int n)	//���ݲ���n��̬����n��Ԫ�ص��������飬�������ָ�뷵��
{
	int* p = new int[n];
	return p;
}

void initArray(int* p, int n, int c)	//ָ����n��Ԫ�ص�����ÿ��Ԫ�ص�ֵ����ʼ��Ϊc
{
	for (int i = 0; i < n; i++)
	{
		*(p + i) = c;
	}
}

int main()
{
	int n, num;
	int* p;
	cin >> n >> num;
	p = newArray(n);	//��̬��������
	initArray(p, n, num);	//��ʼ������
	//���
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			cout << *(p + i);
		}
		else
		{
			cout << *(p + i) << " ";
		}
	}
	return 0;
}