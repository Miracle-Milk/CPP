#include<iostream>
using namespace std;

int main()
{
	int** a;	//ָ��ָ���ָ��
	int m, n;	//n�� m��
	int sum = 0;	//���ݵĺ�
	cin >> m >> n;
	//����ռ�
	a = new int* [n];	//n��int���͵�ָ�� ָ��ÿһ��
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];		//ÿ��Ϊһ����СΪm��һά���� a[i]��ָ��
	}
	//��������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//cin>>a[i][j];//���� 
			cin >> *(*(a + i) + j);//ͬ��a�൱����ָ�� 
			sum += *(*(a + i) + j);
		}
	}
	//�������
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//cin>>a[i][j];//��� 
			cout << *(*(a + i) + j) << "\t";
		}
	}*/
	//������ݵĺ�
	cout << sum << endl;
	//�ͷſռ�
	for (int i = 0; i < n; i++)	//�ͷ�n����СΪm��һά����
	{
		delete[]a[i];
	}
	delete[]a;					//�ͷ�intָ������
	return 0;
}