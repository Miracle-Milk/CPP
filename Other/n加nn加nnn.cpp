#include<iostream>
using namespace std;

int main()
{
	int a, n;
	cin >> a >> n;
	int sum = 0 , t = 0;
	for (int i = 0; i < n; i++)
	{
		t = (t * 10) + a;
		sum += t;
	}
	cout << sum;
	return 0;
}