#include<iostream>
using namespace std;

int H[1001], s;		//����ȫ�ֱ��� sΪԪ�ظ���

void creat()
{
	s = 0;
	H[0] = -10001;
}

void insert(int x)
{
	int i;
	for (i = ++s; H[i / 2] > x; i /= 2) //�����Ԫ�����ƣ��ҵ�X��λ��i 
	{
		H[i] = H[i / 2];
	}
	H[i] = x;
}

int main()
{
	int n, sle;				//nΪ����Ԫ�صĸ��� sleΪ���ҵ�Ԫ�صĸ���
	cin >> n >> sle;
	creat();					//��ʼ����
	int a, b;					//����Ԫ�صĻ���
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		insert(b);
	}
	for (int i = 0; i < sle; i++) 
	{
		cin >> a;
		cout << H[a];
		while (a > 1) 
		{
			a /= 2;
			cout << " " << H[a];
		}
		cout << endl;
	}
	return 0;
}