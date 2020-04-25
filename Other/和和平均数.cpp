#include<iostream>
using namespace std;

int main()
{
	int a, b, c, sum=0;
	double average = 0.0, average1 = 0.0,average2=0.0;
	cin >> a >> b >> c;
	sum = a + b + c;
	average = sum / 3.0;
	average1 = int(average * 100000 + 0.5) / 100000.0;
	average2 = int(average + 0.5);
	cout << sum << endl;
	cout << average1 << endl;
	cout << average2;
	return 0;
}