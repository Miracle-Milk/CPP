#include<iostream>
#include<cstring>
using namespace std;

struct Person
{
	char Name[40];
	char gender[10];
	int age;
};

int main()
{
	Person* p1, * p2;
	Person* q1, * q2;
	int n;	//������
	int k;	//ʵ�ʸ���
	//����
	cin >> n;
	p1 = new Person[n];	//��̬����n��person�ռ�
	k = 0;
	q1 = p1;			//pָ�벻��
	cin >> q1->Name;
	cin >> q1->gender;
	cin >> q1->age;
	while (strcmp(q1->Name, "0") != 0 && strcmp(q1->gender, "0") != 0 && q1->age != 0)
	{
		k++;			//����+1
		q1++;			//ָ����һ��person�ռ�
		cin >> q1->Name;
		cin >> q1->gender;
		cin >> q1->age;
	}
	//����
	p2 = new Person[k];
	q2 = p2;
	q1 = p1 + k - 1;	//q1ָ��p1ĩβ ʵ�ֵ���
	while (q1 >= p1)
	{
		*q2 = *q1;		//��1��ֵ��2
		q2++;			//q2��ͷ��ʼ
		q1--;			//q1��ĩβ��ʼ
	}
	q2 = p2;			//ָ������Ŀ�ʼ
	while (q2 < p2 + k)
	{
		cout << q2->Name;
		cout << " " << q2->gender;
		cout << " " << q2->age << endl;
		q2++;			//ָ����һ��Ԫ��
	}
	delete[]p2;
	delete[]p1;
	return 0;
}