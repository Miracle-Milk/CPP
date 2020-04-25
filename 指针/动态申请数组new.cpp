#include<iostream>
using namespace std;

int main()
{
	double* p;	//指针
	double* q;
	int n;		//最大个数
	int k;		//实际个数
	cin >> n;
	p = new double[n];
	k = 0;
	q = p;
	cin >> *q;
	while (*q != 9999)
	{
		k++;
		q++;
		cin >> *q;
	}
	//输出
	q = p + k - 1;	//指针指向最后一个元素
	cout << *q;
	q--;
	while (q >= p)
	{
		cout << " " << *q;
		q--;
	}
	cout << endl;
	delete[]p;
	return 0;
}