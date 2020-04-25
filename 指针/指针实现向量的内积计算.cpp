#include<iostream>
using namespace std;

double dotProduct(double* a, double* b, int n)
{
	double sum = 0;
	double* q = a;
	double* p = b;
	while (q < a + n)
	{
		sum += (*q) * (*p);
		q++; p++;
	}
	return sum;
}

int main()
{
	double a[100], b[100];
	int n = 0;
	double temp;
	for (int i = 0; i < 100; i++)
	{
		cin >> temp;
		if (temp != -9999)
		{
			a[i] = temp;
			n++;
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		cin >> temp;
		if (temp != -9999)
		{
			b[i] = temp;
		}
		else
		{
			break;
		}
	}
	cout << dotProduct(a, b, n) << endl;
	return 0;
}