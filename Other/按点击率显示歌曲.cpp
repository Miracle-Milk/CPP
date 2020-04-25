#include<iostream>
using namespace std;

struct songs
{
	char name[20];
	char singer[20];
	int click;
};

int main()
{
	songs song[5],temp;
	for (int i = 0; i < 5; i++)
	{
		cin >> song[i].name >> song[i].singer >> song[i].click;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			if (song[i].click < song[j].click)
			{
				temp = song[i];
				song[i] = song[j];
				song[j] = temp;
			}

		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << song[i].name << " " << song[i].singer << " " << song[i].click << endl;
	}
	return 0;
}