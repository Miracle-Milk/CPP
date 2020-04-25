#include <iostream>
using namespace std;
class A {
public:
    int val;

    A(int n = 123)
    {
        val = n;
    }
    A& GetObj()  //函数名前加& 代表改函数的返回值类型是引用
    {
        return *this;  //返回当前对象
    }

};
int main()
{
    int m, n;
    A a;
    cout << a.val << endl;
    while (cin >> m >> n) {
        a.GetObj() = m;
        cout << a.val << endl;
        a.GetObj() = A(n);    
        cout << a.val << endl;
    }
    return 0;
}