#include<iostream>
#include<cmath>
using namespace std;

double pingfang(double x)
{
	return x * x;
}

double mysin(double x)
{
	double y;
	y = 2 * sin((4 * x + 1) * 3.14);
	return y;
}

int main()
{
	double(*f)(double);		//����ָ�����Ķ�ָ��
	double x;				//�����Ա���
	cin >> x;				//����x

	f = pingfang;			//Ϊָ������ָ�븳ֵ
	cout << f(x) << " ";	//ͨ��ָ�����Ķ�ָ����ú���
	f = mysin;				//Ϊָ��������һ��ָ�븳ֵ
	cout << f(x) << endl;	//ͨ��ָ�����Ķ�ָ�������һ������
	return 0;
}