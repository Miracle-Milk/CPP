#include<iostream>
using namespace std;
#define N 10000
/*
ʮ�ֱ���ȴ��ʮ�ִ����ķ���
�ο���https://blog.csdn.net/Changxing898/article/details/52324803
*/
int main()
{
	int a[N] = { 0 };//��һ������ʽ
	int b[N] = { 0 };//�ڶ�������ʽ
	int c[N] = { 0 };//����ʽ�Ļ�
	int d[N] = { 0 };//����ʽ�ĺ�

	int i, m, f;
	cin >> i;//����ʽ������
	while (i--)
	{
		cin >> m >> f;
		a[f] += m;//f�Ƕ���ʽ���ָ��  m�Ƕ���ʽ���ϵ��  (���˷ѿռ�...)
	}
	cin >> i;
	while (i--)
	{
		cin >> m >> f;
		b[f] += m;
	}
	for (int i = N - 1; i >= 0; i--)//�����ʽ�Ļ�  i�Ӵ�С ָ���Ӵ�С��������
	{
		if (a[i])				//ϵ����Ϊ0
		{
			for (int j = 0; j < N; j++)
			{
				if (b[j])
				{
					c[i + j] += a[i] * b[j];  //i+jָ�����,a[i]*b[j]ϵ�����
				}
			}
		}
	}
	int zero = 0;//��ʼ��һ��������zero,�����ж϶���ʽ�Ƿ�Ϊ��
	for (int i = N - 1; i >= 0; i--)
	{
		if (c[i])//��Ӧ��ϵ����Ϊ0
		{
			if (zero)
				cout << " ";
			cout << c[i] << " " << i;//ϵ����ǰ ָ���ں�
			zero++;//����ʽ��Ϊ��
		}
	}
	if (zero == 0)//����ʽΪ�� ���0 0
		cout << "0 0";

	cout << endl;

	for (int i = N - 1; i >= 0; i--)
	{
		/*ϵ����Ϊ0ʱ ϵ����� ָ������*/
		if (a[i])
			d[i] += a[i];
		if (b[i])
			d[i] += b[i];
	}
	
	zero = 0;//�ֿ�ʼ�ж϶���ʽ�Ƿ�Ϊ�� ���¸�ֵ0

	for (int i = N - 1; i >= 0; i--)
	{
		if (d[i])//�͵�ϵ����Ϊ0
		{
			if (zero)
				cout << " ";
			cout << d[i] << " " << i;
			zero++;
		}
	}
	if (zero == 0)
		cout << "0 0";
	return 0;
}