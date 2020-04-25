#include<iostream>
using namespace std;

int main()
{
	int* a,* b,* c;
	a = new int;
	b = new int;
	c = new int;
	cin >> *a >> *b >> *c;
	cout << (*a + *b + *c) << endl;
	delete a, b, c;
	return 0;
}