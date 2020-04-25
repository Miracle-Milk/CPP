#include<iostream>
using namespace std;

void sort(int& a, int& b)
{
    if (a < b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
}

void sort(int& a, int& b, int& c)
{
    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
}

void sort(int& a, int& b, int& c, int& d)
{
    sort(a, b);
    sort(a, c);
    sort(a, d);
    sort(b, c);
    sort(b, d);
    sort(c, d);
}

void sort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            cout << a[i] << " ";
        else
            cout << a[i];
    }
}

int main()
{
    int a, b, c, d;
    int data[100];
    int k, n, i;
    cin >> k;
    switch (k)
    {
    case 1:
        cin >> a >> b;
        sort(a, b);
        cout << a << " " << b << endl;
        break;
    case 2:
        cin >> a >> b >> c;
        sort(a, b, c);
        cout << a << " " << b << " " << c << endl;
        break;
    case 3:
        cin >> a >> b >> c >> d;
        sort(a, b, c, d);
        cout << a << " " << b << " " << c << " " << d << endl;
        break;
    case 4:
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> data[i];
        }
        sort(data, n);
        print(data, n);
        break;
    }
    return 0;
}