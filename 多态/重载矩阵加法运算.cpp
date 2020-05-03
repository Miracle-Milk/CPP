#include<iostream>
using namespace std;

class Array
{
public:
	Array(int m,int n)			//构造函数
	{
		this->m = m;
		this->n = n;
		a = new int* [m];		//m行
		for (int i = 0; i < m; i++)
		{
			a[i] = new int[n];	//n列
		}
	}
	//还得加个析构函数释放空间
	void print();
	void getNumber();
	Array operator+(Array);		//加号重载
	Array operator=(Array);		//等号重载
private:
	int** a;	//矩阵指针
	int m, n;	//m行n列
};

void Array::print()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j != n - 1)
			{
				cout << a[i][j] << " ";
			}//输出 
			else
			{
				cout << a[i][j];
			}
		}
		cout << endl;
	}
}

void Array::getNumber()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];//输入
		}
	}
}

Array Array::operator+(Array b)
{
	Array c(b.m, b.n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c.a[i][j] = b.a[i][j] + this->a[i][j];
		}
	}
	return c;
}

Array Array::operator=(Array b)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			this->a[i][j] = b.a[i][j];
		}
	}
	return*this;
}

int main()
{
	int m = 0, n = 0;	//m行，n列
	cin >> m >> n;
	Array A1(m, n);
	A1.getNumber();
	Array A2(m, n);
	A2.getNumber();
	Array A3(m, n);
	A3 = A2 + A1;
	A3.print();
	return 0;
}