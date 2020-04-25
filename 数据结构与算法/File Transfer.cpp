#include<iostream>
using namespace std;

#define MAXSize 10000
int net[MAXSize];						//

int Find(int a[], int x)				//Ѱ�Ҽ��ϵĸ�  ʹ��·��ѹ��
{
	if (a[x] < 0)	//�ҵ��˼��ϵĸ� ���ظ�
		return x;
	else
		return a[x] = Find(a, a[x]);	//���ҵ��� �ٰ�x�ĸ��ڵ��ɸ�
}

void Union(int a[], int r1, int r2)		//���ȹ鲢
{
	if (a[r2] < a[r1])	//r1�����߱�r2�� 
		a[r1] = r2;	//��r2����r1��
	else
	{
		if (a[r1] == a[r2])	//r1 r2�߶���ͬ ����+1
		{
			a[r1]--;
		}
		a[r2] = r1;	//��r1����r2�� 
	}
}

void Initialization(int a[], int n)		//�����ʼ��
{
	for (int i = 0; i < n; i++)
	{
		a[i] = -1;
	}
}

void Input(int a[])						//��������
{
	int r1, r2;
	int x1, x2;
	cin >> x1 >> x2;
	r1 = Find(a, x1 - 1);	//�����±��0��ʼ ����-1
	r2 = Find(a, x2 - 1);
	if (r1 != r2)			//������ͬ ����һ��������
	{
		Union(a, r1, r2);
	}
}

void Check(int a[])						//����
{
	int r1, r2;
	int x1, x2;
	cin >> x1 >> x2;
	r1 = Find(a, x1 - 1);	//�����±��0��ʼ ����-1
	r2 = Find(a, x2 - 1);
	if (r1 != r2)
	{
		cout << "no" << endl;
	}
	else
	{
		cout << "yes" << endl;
	}
}

void checkNet(int a[], int n)			//�������ǰ�Ĳ���
{
	int rootNum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			rootNum++;
	}
	if (rootNum == 1)
		cout << "The network is connected.";
	else
		cout << "There are " << rootNum << " components.";
}

int main()
{
	int n;
	char in;
	cin >> n;
	Initialization(net, n);		//��ʼ������
	do
	{
		cin >> in;				//ѡ����еĲ���
		switch (in)
		{
		case 'I':Input(net); break;
		case 'C':Check(net); break;
		case 'S':checkNet(net, n); break;
		}
	} while (in!='S');
	return 0;
}