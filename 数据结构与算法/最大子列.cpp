#include<iostream>
using namespace std;

int main()
{
    int maxNum = 0;
    cin >> maxNum;
    int i = 0;
    int maxResult = -1;
    int startNumber = -1;
    int endNumber = -1;
    int newNumber;
    cin>> newNumber
    int tempStartNumber = newNumber;
    int tempEndNumber = newNumber;
    int tempInt = 0;
    if (newNumber > 0)
    {
        maxResult = newNumber;
    }
    for (i = 0; i < maxNum; i++)
    {
        if (tempInt < 0)
        {
            if (newNumber > 0 || (tempStartNumber < 0 && newNumber == 0))
            {
                tempStartNumber = newNumber;
            }
            tempInt = 0;
        }
        tempInt += newNumber;

        tempEndNumber = newNumber;

        if (tempInt > maxResult)
        {
            startNumber = tempStartNumber;
            endNumber = tempEndNumber;
            maxResult = tempInt;
        }
        if (i != maxNum - 1)
        {
            cin >> newNumber;
        }
    }

    if (startNumber < 0)
    {
        startNumber = tempStartNumber;
    }
    if (endNumber < 0)
    {
        endNumber = tempEndNumber;
    }
    if (maxResult < 0)
    {
        maxResult = 0;
    }

    cout << maxResult << startNumber << endNumber;

    return 0;

}

