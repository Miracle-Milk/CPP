#include<iostream>
#include<queue>		//队列的头文件
using namespace std;
/*使用二维数组表示图*/

int Graph[100][100];	//表示图
int Nv, Ne;				//Nv表示节顶点数  Ne表示边数
bool visit[100];		//存储图中的节点是否被访问过

void BuildGraph()	//建图
{
	cin >> Nv;
	for (int i = 0; i < Nv; i++)	//初始化visit为未访问过
	{
		visit[i] = false;
		for (int j = 0; j < Nv; j++)
		{
			Graph[i][j] = 0;		//初始化图 没有边
		}
	}
	cin >> Ne;
	for (int i = 0; i < Ne; i++)
	{
		int v1, v2;
		cin >> v1 >> v2;
		Graph[v1][v2] = 1;
		Graph[v2][v1] = 1;			//增加边
	}
}

void DFS(int v)			//深度优先搜索Depth First Search
{
	visit[v] = true;	//将顶点标记为访问过
	cout << " " << v;
	for (int i = 0; i < Nv; i++)
	{
		if (visit[i] == false && Graph[v][i])		//顶点没有被访问过 且 v 和 i 之间有边连接
		{
			DFS(i);		//递归
		}
	}
}

void BFS(int v)			//广度优先搜索Breadth First Search
{
	queue<int> q;		//使用头文件queue 定义int类型的队列p
	visit[v] = true;	//将顶点标记为访问过
	cout << " " << v;
	//入队
	q.push(v);
	while (!q.empty())	//队列不为空
	{
		int temp = q.front();		//返回队列第一个元素 赋值给temp
		q.pop();		//弹出
		for (int i = 0; i < Nv; i++)
		{
			//如果顶点i没有被访问过 且 弹出的 temp 和 i 之间有边连接
			if (visit[i] == false && Graph[temp][i])
			{
				visit[i] = true;	//将顶点标记为访问过
				cout << " " << i;	//
				q.push(i);			//
			}
		}
	}
}

void Traversal()	//遍历
{
	//DFS
	for (int i = 0; i < Nv; i++)
	{
		if (visit[i] == false)		//顶点i没有访问过,是一个新的连通集
		{
			cout << "{";
			DFS(i);
			cout << " }" << endl;
		}
	}
	//初始化访问状态
	for (int i = 0; i < Nv; i++)
	{
		visit[i] = false;
	}
	//BFS
	for (int i = 0; i < Nv; i++)
	{
		if (visit[i] == false)		//顶点i没有访问过,是一个新的连通集
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