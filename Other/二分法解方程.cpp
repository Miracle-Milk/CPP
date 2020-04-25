#include<iostream>
#include<cmath>
using namespace std;

double F(double x)	//����
{
	double y;
	y = 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
	return y;
}

double root(double a, double b, double k)	//���ַ����
{
	if (abs(F((a + b) / 2)) <= k)			//abs()ȡ����ֵ
	{
		return (a + b) / 2;
	}
	else if (F((a + b) / 2) < 0)			//�м�ֵС��0 ˵�������ұ�
	{
		return root((a + b) / 2, b, k);
	}
	else if (F((a + b) / 2) > 0)			//�м�ֵ����0 ˵���������
	{
		return root(a, (a + b) / 2, k);
	}
}

int main()
{
	double left, right;	//�������Ҷ˵�
	double precision;	//����
	cin >> left >> right >> precision;
	if (F(left) * F(right) < 0)
	{
		cout << root(left, right,precision);
	}
	else if (F(left) * F(right) == 0)
	{
		cout << left;
	}
	return 0;
}