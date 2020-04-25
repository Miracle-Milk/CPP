#include<iostream>
using namespace std;

class dog
{
public:
	dog();
	~dog();
	void GetName();
	void GetAge();
	void GetSex();
	void GetWeight();
	void setdate(char n[], char s, int a, double w);
private:
	char name[40];
	char sex;
	int age;
	double weight;
};

void dog::GetName()
{
	cout << "Its name is " << name << "." << endl;
}

void dog::GetAge()
{
	cout << "It is " << age << " years old." << endl;
}

void dog::GetSex()
{
	if (sex == 'm')
	{
		cout << "It is male." << endl;
	}
	else
	{
		cout << "It is female." << endl;
	}
}

void dog::GetWeight()
{
	cout << "It is " << weight << " kg." << endl;
}

void dog::setdate(char n[], char s, int a, double w)
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
	weight = w;
}

dog::dog()
{
}

dog::~dog()
{
}

int main()
{
	dog dog1;
	char n[40], s;		//nΪname sΪsex
	int a;				//aΪage
	double w;			//wΪweight
	cin >> n >> a >> s >> w;
	dog1.setdate(n, s, a, w);
	cout << "It is my dog." << endl;
	dog1.GetName();
	dog1.GetAge();
	dog1.GetSex();
	dog1.GetWeight();
	return 0;
}