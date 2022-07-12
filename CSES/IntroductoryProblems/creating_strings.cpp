#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

void createStrings(string st, vector<char> temp, set<vector<char>> &stt)
{
    if (st.length() == 0)
    {
        stt.insert(temp);
        return;
    }

    int i = 0;
    while (st[i] != '\0')
    {
        temp.pb(st[i]);
        createStrings(st.substr(0, i) + st.substr(i + 1), temp, stt);
        temp.pp();
        i++;
    }

    return;
}

int main()
{
    string st;
    cin >> st;
    vector<char> temp;
    set<vector<char>> stt;
    createStrings(st, temp, stt);

    cout<<stt.size()<<endl;

    for (auto i : stt)
    {
        for (auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}