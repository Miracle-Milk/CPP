#include<iostream>
using namespace std;

int main()
{
    int n, i, j, t, num = 0;
    int a[3] = { 25,10,5 };
    cin >> n;
    if (n > 99 || n < 0)
        cout << "the money is invalid!";
    else {
        for (j = n / a[0]; j >= 0; j--)                                                          
        {
            int temp1 = n - j * a[0];                                     
            for (t = temp1 / a[1]; t >= 0; t--)                                
            {
                int temp2 = temp1 - t * a[1];                    
                for (i = temp2 / a[2]; i >= 0; i--)                         
                {
                    num++;                                            
                }
            }
        }
        cout << num << endl;
    }
    return 0;
}