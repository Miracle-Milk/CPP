#include<iostream>
using namespace std;

int main()
{
	int a[20];
	int* p;
	int n = 0;
	p = a;
	cin >> *p;
	while (*p != 9999)	//����
	{
		n++;
		if (n == 20)		//��������
		{
			break;
		}
		p++;
		cin >> *p;
	}
	if (n > 0)			//���鲻��
	{
		p = a;
		cout << *p;
		p++;
		while (p < a + n)
		{
			cout << " " << *p;
			p++;
		}
	}
	return 0;
}