#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	double a[100], sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i] * a[i];
	}
	cout << sqrt(sum);
	return 0;
}