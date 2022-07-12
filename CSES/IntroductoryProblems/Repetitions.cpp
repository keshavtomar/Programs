#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long

using namespace std;

int maximumRepetitionLength(string st)
{
    int maxlen = 1;
    int i = 1;
    int count=1;
    while (st[i] != 0)
    {
        if(st[i]==st[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>maxlen){
            maxlen=count;
        }
        i++;
    }
    return maxlen;
}

int main(void)
{
    string st;
    cin >> st;
    int count = maximumRepetitionLength(st);
    cout << count;
}