#include<iostream>
#include<cmath>
using namespace std;

#define YES 1

int n, d;			//nΪ����ĸ��� dΪ��Ծ���� ���ж��Ƿ��бߵı�׼
bool visit[100];	//�洢ͼ�еĽڵ��Ƿ񱻷��ʹ�
int answer;			//

//ʹ�ýṹ��洢��ʾͼ ʹ�ú������ݶ���ľ����ж��Ƿ��б�
struct Point
{
	int x, y;
};
Point p[100];		//�ýṹ�������ʾ��ͼ

void getPoint()		//��������
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

bool firstJump(int v)			//�жϵ�һ����Ծ (Ĭ��λ��Ϊ 0, 0)
{
	double distance;
	distance = getDistance(0, 0, p[v].x, p[v].y) - 15 / 2;
	if (distance > d)		//���������Ծ���� ��ʾ������ȥ
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

bool isJump(int a, int b)	//�ж�������֮��ľ���
{
	double distance;
	distance = getDistance(p[a].x, p[a].y, p[b].x, p[b].y);
	if (distance > d)		//���������Ծ���� ��ʾ������ȥ
	{
		return false;
	}
	else
	{
		return true;
	}
}

int DFS(int v)					//�������
{
	visit[v] = true;		//�ѷ���
	if (isSafe(p[v].x,p[v].y))			//�����ϰ�
	{
		answer = YES;
	}
	else					//�����ϰ� �ݹ�
	{
		for (int i = 0; i < n; i++)
		{
			if (!visit[i] && isJump(v, i))	//û�з��ʹ������ڷ�Χ�ڵĽڵ� ��������ȥ
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
		if (!visit[i] && firstJump(i))	//����ÿһ����ͨ��
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