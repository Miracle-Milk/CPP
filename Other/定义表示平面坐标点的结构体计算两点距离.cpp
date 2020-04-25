#include<iostream>
#include<cmath>
using namespace std;

struct point
{
	double x, y;
};
int main()
{
	point a, b;
	cin >> a.x >> a.y;
	cin >> b.x >> b.y;
	double sum = 0;
	sum = (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y);
	cout << sqrt(sum);
	return 0;
}