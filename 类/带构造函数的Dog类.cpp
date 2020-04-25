#include<iostream>
#include<cstring>
using namespace std;

class Dog
{
public:
	Dog();
	Dog(char n[],int,char,double);
	~Dog();
	void getName();
	void getAge();
	void getSex();
	void getWeight();
	void speak();
private:
	char name[20];
	int age;
	char sex;
	double weight;
};

Dog::Dog()
{
}

Dog::Dog(char n[], int age, char sex, double weight)
{
	strcpy_s(name, n);
	this->age = age;
	this->sex = sex;
	this->weight = weight;
}

Dog::~Dog()
{
}

void Dog::getName()
{
	cout << name << endl;
}

void Dog::getAge()
{
	cout << age << endl;
}

void Dog::getSex()
{
	cout << sex << endl;
}

void Dog::getWeight()
{
	cout << weight << endl;
}

void Dog::speak()
{
	cout << "Arf!Arf!" << endl;
}

int main()
{
	char name[20];
	int age;
	char sex;
	double weight;
	cin >> name >> age >> sex >> weight;
	Dog husky(name, age, sex, weight);
	husky.getName();
	husky.getAge();
	husky.getSex();
	husky.getWeight();
	husky.speak();
	return 0;
}