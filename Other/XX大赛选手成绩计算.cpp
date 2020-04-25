#include<iostream>
using namespace std;

int main()
{
	int a[10], min = 100, max = 0, sum = 0;
	double avg;
	for (int i = 0; i < 10; i++)
	{
		int temp;
		cin >> a[i];
		if (a[i] > 100 || a[i] < 0)
		{
			cout << "the score is invalid.";
			return 0;
		}
		temp = a[i];
		if (max < temp)
			max = temp;
		if (min > temp)
			min = temp;
		sum += a[i];
	}
	avg = (sum - (min + max)) / 8.0;
	cout << avg;
	return 0;
}