#include<iostream>
#include<cmath>
using namespace std;

void function(double a[], int n, double * max, double* min, double* avg, double* stdev)
{
	double sum = a[0];
	*max = *min = a[0];
	for (int i = 1; i < n ; i++)
	{
		if (*min > a[i])
			*min = a[i];
		if (*max < a[i])
			*max = a[i];
		sum += a[i];
	}
	*avg = sum / n;
	double sum1 = 0;
	for (int i = 0; i < n; i++)
	{
		sum1 = sum1 + ((a[i] - *avg) * (a[i] - *avg));
	}
	*stdev = sqrt(sum1 / n);
}

int main()
{
	int  n, in;
	double max, min, avg, stdev;
	double a[100] = {};
	for (int i = 0; i < 100; i++)
	{
		cin >> in;
		if (in != -9999)
			a[i] = in;
		else
		{
			n = i;
			break;
		}
	}
	function(a, n, &max, &min, &avg, &stdev);
	cout << max << " " << min << " " << avg << " " << stdev;
	return 0;
}