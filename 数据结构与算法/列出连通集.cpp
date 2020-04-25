#include<iostream>
#include<queue>		//���е�ͷ�ļ�
using namespace std;
/*ʹ�ö�ά�����ʾͼ*/

int Graph[100][100];	//��ʾͼ
int Nv, Ne;				//Nv��ʾ�ڶ�����  Ne��ʾ����
bool visit[100];		//�洢ͼ�еĽڵ��Ƿ񱻷��ʹ�

void BuildGraph()	//��ͼ
{
	cin >> Nv;
	for (int i = 0; i < Nv; i++)	//��ʼ��visitΪδ���ʹ�
	{
		visit[i] = false;
		for (int j = 0; j < Nv; j++)
		{
			Graph[i][j] = 0;		//��ʼ��ͼ û�б�
		}
	}
	cin >> Ne;
	for (int i = 0; i < Ne; i++)
	{
		int v1, v2;
		cin >> v1 >> v2;
		Graph[v1][v2] = 1;
		Graph[v2][v1] = 1;			//���ӱ�
	}
}

void DFS(int v)			//�����������Depth First Search
{
	visit[v] = true;	//��������Ϊ���ʹ�
	cout << " " << v;
	for (int i = 0; i < Nv; i++)
	{
		if (visit[i] == false && Graph[v][i])		//����û�б����ʹ� �� v �� i ֮���б�����
		{
			DFS(i);		//�ݹ�
		}
	}
}

void BFS(int v)			//�����������Breadth First Search
{
	queue<int> q;		//ʹ��ͷ�ļ�queue ����int���͵Ķ���p
	visit[v] = true;	//��������Ϊ���ʹ�
	cout << " " << v;
	//���
	q.push(v);
	while (!q.empty())	//���в�Ϊ��
	{
		int temp = q.front();		//���ض��е�һ��Ԫ�� ��ֵ��temp
		q.pop();		//����
		for (int i = 0; i < Nv; i++)
		{
			//�������iû�б����ʹ� �� ������ temp �� i ֮���б�����
			if (visit[i] == false && Graph[temp][i])
			{
				visit[i] = true;	//��������Ϊ���ʹ�
				cout << " " << i;	//
				q.push(i);			//
			}
		}
	}
}

void Traversal()	//����
{
	//DFS
	for (int i = 0; i < Nv; i++)
	{
		if (visit[i] == false)		//����iû�з��ʹ�,��һ���µ���ͨ��
		{
			cout << "{";
			DFS(i);
			cout << " }" << endl;
		}
	}
	//��ʼ������״̬
	for (int i = 0; i < Nv; i++)
	{
		visit[i] = false;
	}
	//BFS
	for (int i = 0; i < Nv; i++)
	{
		if (visit[i] == false)		//����iû�з��ʹ�,��һ���µ���ͨ��
		{
			cout << "{";
			BFS(i);
			cout << " }" << endl;
		}
	}
}

int main()
{
	BuildGraph();
	Traversal();
	return 0;
}