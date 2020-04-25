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

int Max(int a, int b)//返回最大值
{
	return a > b ? a : b;
}

int getheight(Tree A)//返回树的高度,空树返回1
{
	return A == NULL ? -1 : A->height;
}

Tree RR(Tree A)//RR往左转
{
	Tree B = A->right;		
	A->right = B->left;
	B->left = A;
	A->height = Max(getheight(A->left), getheight(A->right)) + 1;	//A的高度是左右子树最大高度+1
	B->height = Max(getheight(B->left), getheight(B->right)) + 1;	//B的高度是左右子树最大高度+1
	return B;	//根节点为B
}

Tree LL(Tree A)//LL往右转
{
	Tree B = A->left;
	A->left = B->right;
	B->right = A;
	A->height = Max(getheight(A->left), getheight(A->right)) + 1;	//A的高度是左右子树最大高度+1
	B->height = Max(getheight(B->left), getheight(B->right)) + 1;	//B的高度是左右子树最大高度+1
	return B;	//根节点为B
}

Tree LR(Tree A)//先往左转(RR)再往右转(LL)
{
	A->left = RR(A->left);
	return LL(A);
}

Tree RL(Tree A)//先往右转(LL)再往左转(RR)
{
	A->right = LL(A->right);
	return RR(A);
}

Tree insert(Tree A, int x)
{
	if (!A)	//树为空 (节点为空)  分配空间
	{
		A = new Node;
		A->left = NULL;
		A->right = NULL;
		A->value = x;
		A->height = 0;
	}
	else	//树不为空 (节点不空)  插入数据
	{
		if (A->value < x)	//新节点大于根 右子树 RL || RR
		{
			A->right = insert(A->right, x);	//递归到右子树
			if (getheight(A->right) - getheight(A->left) == 2)	//左右子树高度差大于1 进行旋转操作
			{
				if (x < A->right->value)	//RL  
					A = RL(A);
				else if (x > A->right->value)	//RR
					A = RR(A);
			}
		}
		else if (A->value > x)	//新节点小于根 左子树 LR ||LL
		{
			A->left = insert(A->left, x);	//递归到左子树
			if (getheight(A->left) - getheight(A->right) == 2)	//左右子树高度差大于1 进行旋转操作
			{
				if (x < A->left->value)	//LL
					A = LL(A);
				else if (x > A->left->value)	//LR
					A = LR(A);
			}
		}
	}
	//更新树高
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