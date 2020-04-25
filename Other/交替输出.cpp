#include <iostream>
using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    cout << 1;
    i++;
    int t = -1;
    while (i<n) 
    {
        cout << " " << t;
        t = -t;
        i++;
    }
    cout << endl;

    return 0;
}