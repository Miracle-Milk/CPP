#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {

private:
    char name[20];
    int age, id;
    int a[4];
    double avg;
    char c;                         //使用c读取逗号
public:
    void input()
    {
        cin.getline(name, 20, ','); //cin.getline(字符指针char*,字符个数int,结束符char)
        cin >> age >> c >> id;
        for (int i = 0; i < 4; i++)
            cin >> c >> a[i];
    }
    void calculate()
    {
        int sum = 0;
        for (int i = 0; i < 4; i++)
            sum +=a[i];
        avg = sum / 4.0;
    }
    void output()
    {
        cout << name << c << age << c << id << c << avg;
    }
};

int main() {
    Student student;        // 定义类的对象
    student.input();        // 输入数据
    student.calculate();    // 计算平均成绩
    student.output();       // 输出数据
}