#include <iostream>
using namespace std;

struct A
{
    int v;
    A(int vv) :v(vv) { }
    const A* getPointer()const
    {
        const A* p = this;
        return p;
    }

};

int main()
{
    const A a(10);
    const A* p = a.getPointer();
    cout << p->v << endl;
    return 0;
}