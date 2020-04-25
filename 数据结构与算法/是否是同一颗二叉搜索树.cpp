#include<iostream>
using namespace std;

struct Node
{
	int val;
	Node* left;
	Node* right;
	int flag;
};
typedef Node* Tree;

Tree insert(Tree T, int a)
{
	if (!T) //����ڵ�Ϊ�� ����һ���ڵ�
	{
		T = new(Node);
		T->val = a;
		T->left = T->right = NULL;
		T->flag = 0;
	}
	else if(T->val < a) //�ڵ㲻Ϊ�� �Ҵ����ֵ���ڽڵ��ֵ ����������
	{
		T->right = insert(T->right, a);
	}
	else if (T->val > a)// �����ֵ���ڽڵ��ֵ ����������
	{
		T->left = insert(T->left, a);
	}
	return T;
}
int Judge(Tree T, int a)//�ж�
{
	if (T->flag)//����������ڵ�
	{
		if (a > T->val)//�����ֵ���ڽڵ��ֵ ����������
		{
			return Judge(T->right, a);
		}
		else if (a < T->val)//�����ֵС�ڽڵ��ֵ ����������
		{
			return Judge(T->left, a);
		}
		else//
			return 0;
	}
	else//û�о�������ڵ�
	{
		if (T->val == a)//����ڵ��ֵ�ǲ��ҵ�ֵ
		{
			T->flag = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

void Reset(Tree T)
{
	if (T->left)
		Reset(T->left);
	if (T->right)
		Reset(T->right);
	T->flag = 0;
}

int main()
{
	int N, L;
	cin >> N;
	while (N)
	{
		cin >> L;
		Tree T = NULL;
		int x;
		for (int i = 0; i < N; i++)//������
		{
			cin >> x;
			T = insert(T, x);
		}
		for (int i = 0; i < L; i++)// N������
		{
			int a, flag = 1;
			Reset(T);//��Tree��flag����Ϊ0
			for (int j = 0; j < N; j++)//һ������
			{
				cin >> a;
				if (!Judge(T, a))//����N����,���ж�
				{
					flag = 0;
				}
			}
			flag ? cout << "Yes" << endl : cout << "No" << endl;
		}
		cin >> N;
	}
	return 0;
}