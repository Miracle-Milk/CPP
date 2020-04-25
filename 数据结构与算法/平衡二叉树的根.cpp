#include<iostream>
using namespace std;

struct Node
{
	int value;
	Node* left;
	Node* right;
	int height;
};
typedef Node* Tree;

int Max(int a, int b)//�������ֵ
{
	return a > b ? a : b;
}

int getheight(Tree A)//�������ĸ߶�,��������1
{
	return A == NULL ? -1 : A->height;
}

Tree RR(Tree A)//RR����ת
{
	Tree B = A->right;		
	A->right = B->left;
	B->left = A;
	A->height = Max(getheight(A->left), getheight(A->right)) + 1;	//A�ĸ߶��������������߶�+1
	B->height = Max(getheight(B->left), getheight(B->right)) + 1;	//B�ĸ߶��������������߶�+1
	return B;	//���ڵ�ΪB
}

Tree LL(Tree A)//LL����ת
{
	Tree B = A->left;
	A->left = B->right;
	B->right = A;
	A->height = Max(getheight(A->left), getheight(A->right)) + 1;	//A�ĸ߶��������������߶�+1
	B->height = Max(getheight(B->left), getheight(B->right)) + 1;	//B�ĸ߶��������������߶�+1
	return B;	//���ڵ�ΪB
}

Tree LR(Tree A)//������ת(RR)������ת(LL)
{
	A->left = RR(A->left);
	return LL(A);
}

Tree RL(Tree A)//������ת(LL)������ת(RR)
{
	A->right = LL(A->right);
	return RR(A);
}

Tree insert(Tree A, int x)
{
	if (!A)	//��Ϊ�� (�ڵ�Ϊ��)  ����ռ�
	{
		A = new Node;
		A->left = NULL;
		A->right = NULL;
		A->value = x;
		A->height = 0;
	}
	else	//����Ϊ�� (�ڵ㲻��)  ��������
	{
		if (A->value < x)	//�½ڵ���ڸ� ������ RL || RR
		{
			A->right = insert(A->right, x);	//�ݹ鵽������
			if (getheight(A->right) - getheight(A->left) == 2)	//���������߶Ȳ����1 ������ת����
			{
				if (x < A->right->value)	//RL  
					A = RL(A);
				else if (x > A->right->value)	//RR
					A = RR(A);
			}
		}
		else if (A->value > x)	//�½ڵ�С�ڸ� ������ LR ||LL
		{
			A->left = insert(A->left, x);	//�ݹ鵽������
			if (getheight(A->left) - getheight(A->right) == 2)	//���������߶Ȳ����1 ������ת����
			{
				if (x < A->left->value)	//LL
					A = LL(A);
				else if (x > A->left->value)	//LR
					A = LR(A);
			}
		}
	}
	//��������
	A->height = Max(getheight(A->left), getheight(A->right)) + 1;
	return A;
}

int main()
{
	int n;
	Tree T = NULL;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		T = insert(T, temp);
	}
	cout << T->value;
	return 0;
}