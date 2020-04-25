#include<iostream>
using namespace std;

int main()
{
    int a1 = 0, a2 = 1, temp, n;
    cin >> n;
    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << a1 << " " << a2;
    else
    {
        cout << a1 << " " << a2;
        for (int i = 1; i < n; i++)
        {
            temp = a2;
            a2 += a1;
            a1 = temp;
            cout << " " << a2;
        }
    }
    return 0;
}
