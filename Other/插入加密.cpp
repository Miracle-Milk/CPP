#include<iostream>
#include<cstring>
using namespace std;
/*³­µÄ×÷Òµ*/
int main() {
    string s[5] = { "a","b","c","d","e" };
    string text1, text2;
    int k;
    cin >> text1;
    cin >> k;
    int len = text1.length();
    int p;
    if (len % k == 0)
        p = len / k;
    else
        p = len / k + 1;

    for (int i = 0; i < p; i++) {
        text2 += (text1.substr(i * k, k) + s[i % 5]);
    }
    cout << text2 << endl;
    return 0;
}