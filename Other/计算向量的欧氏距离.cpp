#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	double a[100], b[100], sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		sum += (a[i] - b[i]) * (a[i] - b[i]);
	}
	cout << sqrt(sum);
	return 0;
}