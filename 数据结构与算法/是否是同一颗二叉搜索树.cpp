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
	if (!T) //如果节点为空 创建一个节点
	{
		T = new(Node);
		T->val = a;
		T->left = T->right = NULL;
		T->flag = 0;
	}
	else if(T->val < a) //节点不为空 且传入的值大于节点的值 往右子树走
	{
		T->right = insert(T->right, a);
	}
	else if (T->val > a)// 传入的值大于节点的值 往左子树走
	{
		T->left = insert(T->left, a);
	}
	return T;
}
int Judge(Tree T, int a)//判断
{
	if (T->flag)//经过了这个节点
	{
		if (a > T->val)//传入的值大于节点的值 往右子树走
		{
			return Judge(T->right, a);
		}
		else if (a < T->val)//传入的值小于节点的值 往左子树走
		{
			return Judge(T->left, a);
		}
		else//
			return 0;
	}
	else//没有经过这个节点
	{
		if (T->val == a)//这个节点的值是查找的值
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
		for (int i = 0; i < N; i++)//创建树
		{
			cin >> x;
			T = insert(T, x);
		}
		for (int i = 0; i < L; i++)// N组数据
		{
			int a, flag = 1;
			Reset(T);//将Tree的flag重置为0
			for (int j = 0; j < N; j++)//一组数据
			{
				cin >> a;
				if (!Judge(T, a))//读入N个数,并判断
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