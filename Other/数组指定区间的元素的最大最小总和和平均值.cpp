#include<iostream>
using namespace std;

int main()
{
	int a[30] = { -1,15,-40,-180,99,-122,-124,27,192,128,-165,95,161,-138, -183,51,107,39,-184,113,-63,9,107,188,-11,-13,151,-52,7,6 };
	int max = -9999, min = 9999, sum = 0;
	double avg;
	int i, j;
	cin >> i >> j;
	if (i >= j)
	{
		avg = max = min = sum =  0;
	}
	else
	{
		for (int k = i; k < j; k++)
		{
			sum += a[k];
			if (max < a[k])
				max = a[k];
			if (min > a[k])
				min = a[k];
		}
		avg = (sum * 1.0) / ((j - i) * 1.0);
	}
	cout << max << " " << min << " " << sum << " " << avg;
	return 0;
}