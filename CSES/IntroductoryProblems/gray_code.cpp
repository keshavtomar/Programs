#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int savestring(int t, string st[65537])                      //pow(2,16) is 65536, and they can give t=16, that's why I took this value
{
    if (t == 1)
    {
        st[0] = "0";
        st[1] = "1";
        return 2;
    }

    int cnt = savestring(t - 1, st);

    for (int i = 0; i < cnt; i++)
    {
        st[cnt + i] = st[cnt - 1 - i];
    }

    for (int i = 0; i < cnt; i++)
    {
        st[i] = "0" + st[i];
    }
    for (int i = 0; i < cnt; i++)
    {
        st[i + cnt] = "1" + st[i + cnt];
    }

    return 2 * cnt;
}

int main()
{
    int t;
    cin >> t;
    string st[65537];
    int cnt = savestring(t, st);

    for (int i = 0; i < cnt; i++)
    {
        cout << st[i] << endl;
    }
}