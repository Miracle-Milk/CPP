#include<iostream>
using namespace std;

class Vector
{
public:
	Vector();
	Vector(int);
	~Vector();
	void show();
private:
	int* p;		
	int n;
};

void Vector::show()		//�������
{
	if (n > 0)
	{
		int* q = p;
		cout << *q;
		q++;
		while (q < p + n)
		{
			cout << " " << *q;
			q++;
		}
	}
}

Vector::Vector(int m)	//����m���ռ������
{
	n = m;
	p = new int[n];		
	int* q = p;			
	while (q < p + n)	
	{
		*q = 0; q++;
	}
}

Vector::Vector()		//Ĭ�Ϲ��캯�� ����10���ռ������
{
	n = 10;
	p = new int[n];		//��̬����n����������
	int* q = p;			//ָ��qָ������ĵ�һ��Ԫ��
	while (q < p + n)	//��ֵ�����n��Ԫ��Ϊ0
	{
		*q = 0; q++;
	}
}

Vector::~Vector()
{
	delete[]p;
}

int main()
{
	Vector a, b(5);		//������������,a��Ĭ�Ϲ��캯��,b���вι��캯��
	a.show(); cout << endl;
	b.show(); cout << endl;
	return 0;
}