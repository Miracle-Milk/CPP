#include<iostream>
using namespace std;

struct Student
{
	int id;
	int score;
};

void swap(Student* a, Student* b)
{
	Student temp = *a;
	*a = *b;
	*b = temp;
}

void sort(Student s[], int num)		//排序
{
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			if ((s + i)->score > (s + j)->score)
			{
				swap((s + i), (s + j));
			}
			else if ((s + i)->score == (s + j)->score)	//成绩相同时学号小的在前
			{
				if ((s + i)->id > (s + j)->id)
					swap((s + i), (s + j));
			}
		}
	}
}

int main()
{
	Student S[100];	//定义含有100个元素的结构体指针
	int ID, sco, num = 0;
	for (int i = 0; i < 100; i++)
	{
		cin >> ID >> sco;
		if (ID != 0 && sco != 0)
		{
			S[i].id = ID;
			S[i].score = sco;
			num++;
		}
		else
		{
			break;
		}
	}
	sort(S, num);
	for (int i = 0; i < num; i++)
	{
		cout << S[i].id << " " << S[i].score << endl;
	}
	return 0;
}