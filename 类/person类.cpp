#include<iostream>
using namespace std;

class person
{
public:
	person();
	~person();
	void Register(char n[], char s, int a);
	void ShowMe();
private:
	char name[40] = {};
	char sex;
	int age;
};

void person::Register(char n[], char s, int a)	//¸³Öµ
{
	for (int i = 0; i < 40; i++)
	{
		name[i] = n[i];
		if (n[i] == '\0')
		{
			break;
		}
	}
	sex = s;
	age = a;
}

void person::ShowMe()							//´òÓ¡
{
	cout << name << " " << age << " " << sex;
}

person::person()
{
}

person::~person()
{
}

int main()
{
	person person1, person2;
	char n[40], s;
	int a;
	cin >> n >> a >> s;
	person1.Register(n, s, a);
	person2.Register("Zhang3", 'm', 19);
	person1.ShowMe();
	cout << endl;
	person2.ShowMe();
	return 0;
}