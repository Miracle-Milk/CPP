#include<iostream>
using namespace std;

int sumDiagonal(int** a, int n)		//���ؾ���ĶԽ�Ԫ��֮��
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += *(*(a + i) + i);
	}
	return sum;
}

int main()
{
	int** a;
	int n;
	cin >> n;
	//��̬��������
	a = new int* [n];		//��ָ������
	for (int i = 0; i < n; i++)
	{
		a[i] = new int [n];//ÿ����ָ���Ӧ������
	}
	//��������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a[i][j];//���� 
			//cin >> *(*(a + i) + j);//ͬ��a�൱����ָ�� 
		}
	}
	cout << sumDiagonal(a, n) << endl;
	return 0;
}