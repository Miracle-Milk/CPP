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
	int n;	//最大个数
	int k;	//实际个数
	//输入
	cin >> n;
	p1 = new Person[n];	//动态申请n个person空间
	k = 0;
	q1 = p1;			//p指针不变
	cin >> q1->Name;
	cin >> q1->gender;
	cin >> q1->age;
	while (strcmp(q1->Name, "0") != 0 && strcmp(q1->gender, "0") != 0 && q1->age != 0)
	{
		k++;			//人数+1
		q1++;			//指向下一个person空间
		cin >> q1->Name;
		cin >> q1->gender;
		cin >> q1->age;
	}
	//复制
	p2 = new Person[k];
	q2 = p2;
	q1 = p1 + k - 1;	//q1指向p1末尾 实现倒序
	while (q1 >= p1)
	{
		*q2 = *q1;		//把1赋值给2
		q2++;			//q2从头开始
		q1--;			//q1从末尾开始
	}
	q2 = p2;			//指向数组的开始
	while (q2 < p2 + k)
	{
		cout << q2->Name;
		cout << " " << q2->gender;
		cout << " " << q2->age << endl;
		q2++;			//指向下一个元素
	}
	delete[]p2;
	delete[]p1;
	return 0;
}