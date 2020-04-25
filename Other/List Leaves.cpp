#include<iostream>
using namespace std;

int N;

struct Tree //Ê÷
{
	int left;
	int right;
}T[10];

struct Queue
{
    int* tree;
    int front;
    int rear;
};
typedef struct Queue* Tqueue;

Tqueue creatQueue()
{
    Tqueue q = (Tqueue)malloc(sizeof(struct Queue));
    q->tree = (int*)malloc(10 * sizeof(int));
    q->front = q->rear = -1;
    return q;
}
bool isEmpty(Tqueue q)
{
    if (q->front == q->rear)
        return 1;
    else
        return 0;
}
void addQueue(Tqueue q, int a)
{
    if ((q->rear + 1) % 10 == q->front)
        return;
    else
    {
        q->rear = (q->rear + 1) % 10;
        q->tree[q->rear] = a;
    }
}
int delQueue(Tqueue q)
{
    if (q->front == q->rear) 
    {
        return -1;
    }
    else 
    {
        q->front = (q->front + 1) % 10;
        return q->tree[q->front];
    }
}

int BuildTree(Tree T[])
{
    int Root = -1, i = 0;
    int check[10];
    char cl, cr;
    if (N)
    {
        for (i = 0; i < N; i++)
            check[i] = 0;
        for (i = 0; i < N; i++)
        {
            cin >>  cl >> cr;
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

void Output(int a)
{
    int i;
    int temp = 0;
    if (a == -1)
        return;
    Tqueue q = creatQueue();
    addQueue(q, a);
    while (q->front!=q->rear)
    {
        temp++;
        i = delQueue(q);
        if (T[i].left != -1 && T[i].right != -1)
        {
            addQueue(q, T[i].left);
            addQueue(q, T[i].right);
        }
        else if (T[i].left != -1 && T[i].right == -1)
        {
            addQueue(q, T[i].left);
        }
        else if (T[i].left == -1 && T[i].right != -1)
        {
            addQueue(q, T[i].right);
        }
        else
        {
            if (temp != N)
                cout << i << " ";
            else
                cout << i;
        }
    }
}

int main()
{
    int a;
    cin >> N;
    a = BuildTree(T);
    Output(a);
    return 0;
}