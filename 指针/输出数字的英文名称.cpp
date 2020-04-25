#include<iostream>
using namespace std;
char* digitName(int n)
{
    char* num[] = { "zero","one","two","three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve" };
    return num[n];
}

int main()
{
    int n;
    cin >> n;
    cout << digitName(n);
    return 0;
}