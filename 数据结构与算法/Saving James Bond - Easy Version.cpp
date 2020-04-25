#include<iostream>
#include<cmath>
using namespace std;

#define YES 1

int n, d;			//n为鳄鱼的个数 d为跳跃距离 即判断是否有边的标准
bool visit[100];	//存储图中的节点是否被访问过
int answer;			//

//使用结构体存储表示图 使用函数根据顶点的距离判断是否有边
struct Point
{
	int x, y;
};
Point p[100];		//用结构体数组表示的图

void getPoint()		//输入数据
{
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].x >> p[i].y;
	}
}

double getDistance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
}

bool firstJump(int v)			//判断第一次跳跃 (默认位置为 0, 0)
{
	double distance;
	distance = getDistance(0, 0, p[v].x, p[v].y) - 15 / 2;
	if (distance > d)		//距离大于跳跃距离 表示跳不过去
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool isSafe(int x,int y)
{
	if (abs(x - 50) <= d || abs(x + 50) <= d || abs(y + 50) <= d || abs(y - 50) <= d)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isJump(int a, int b)	//判断两个点之间的距离
{
	double distance;
	distance = getDistance(p[a].x, p[a].y, p[b].x, p[b].y);
	if (distance > d)		//距离大于跳跃距离 表示跳不过去
	{
		return false;
	}
	else
	{
		return true;
	}
}

int DFS(int v)					//深度优先
{
	visit[v] = true;		//已访问
	if (isSafe(p[v].x,p[v].y))			//可以上岸
	{
		answer = YES;
	}
	else					//不能上岸 递归
	{
		for (int i = 0; i < n; i++)
		{
			if (!visit[i] && isJump(v, i))	//没有访问过的且在范围内的节点 且能跳过去
			{
				answer = DFS(i);
				if (answer == YES)
				{
					break;
				}
			}
		}
	}
	return answer;
}

void save007()				//
{
	for (int i = 0; i < n; i++)
	{
		if (!visit[i] && firstJump(i))	//遍历每一个连通集
		{
			answer = DFS(i);
			if (answer == YES)
			{
				break;
			}
		}
	}
	if (answer == YES)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}

int main()
{
	cin >> n >> d;
	getPoint();
	save007();
	return 0;
}