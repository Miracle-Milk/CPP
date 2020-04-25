#include<iostream>
using namespace std;

struct Tree
{
	char Element;
	int left;
	int right;
}T1[10],T2[10];

int BuildTree(Tree T[])
{
	int N, Root = -1, i = 0;
	cin >> N;
	int check[10];
	char cl, cr;
	if (N)
	{
		for (i = 0; i < N; i++)
			check[i] = 0;
		for (i = 0; i < N; i++)
		{
			cin >> T[i].Element >> cl >> cr;
			if (cl != '-')
			{
				T[i].left = cl - '0';
				check[T[i].left] = 1;
			}
			else
				T[i].left = -1;
			if (cr != '-')
			{
				T[i].right = cr - '0';
				check[T[i].right] = 1;
			}
			else
			{
				T[i].right = -1;
			}
		}
		for (i = 0; i < N; i++)
		{
			if (!check[i])
			{
				Root = i;
				break;
			}
		}
	}
	return Root;
};
int isomorphic(int B1,int B2)
{
	int A, B;
	if ((B1 == -1) && (B2 == -1))//��������Ϊ��
	{
		return 1;
	}
	if (((B1 == -1) && (B2 != -1)) || ((B1 != -1) && (B2 == -1)))//һ��Ϊ��,һ�Ų�Ϊ��
	{
		return 0;
	}
	if (T1[B1].Element != T2[B2].Element)//������������ͬ
	{
		return 0;
	}
	if ((T1[B1].left == -1) && (T2[B2].left == -1))//��������������Ϊ��
	{
		return isomorphic(T1[B1].right, T2[B2].right);//�Ƚ�������
	}
	if (((T1[B1].left != -1) && (T2[B2].left != -1)) && (T1[T1[B1].left].Element == T2[T2[B2].left].Element))//��������Ϊ���Ҹ���ͬ
	{
		return ((A = isomorphic(T1[B1].left, T2[B2].left)) && (B = isomorphic(T1[B1].right, T2[B2].right)));//�Ƚ���������
	}
	else
	{
		return ((A = isomorphic(T1[B1].left, T2[B2].right)) && (B = isomorphic(T1[B1].right, T2[B2].left)));//���ұȽ�
	}
};

int main()
{
	int a1, a2;
	a1 = BuildTree(T1);
	a2 = BuildTree(T2);
	if (isomorphic(a1, a2))
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}