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
    char c;                         //ʹ��c��ȡ����
public:
    void input()
    {
        cin.getline(name, 20, ','); //cin.getline(�ַ�ָ��char*,�ַ�����int,������char)
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
    Student student;        // ������Ķ���
    student.input();        // ��������
    student.calculate();    // ����ƽ���ɼ�
    student.output();       // �������
}