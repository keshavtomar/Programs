#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <map>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

void solve()
{
    char a[8][8];
    FOR(i, 0, 8)
    {
        FOR(j, 0, 8)
        {
            cin >> a[i][j];
        }
    }

    char ans = '.';
    FOR(i, 0, 8)
    {
        int Rcount = 0;
        FOR(j, 0, 8)
        {
            if (a[i][j] == 'R')
            {
                Rcount++;
            }
        }
        if (Rcount == 8)
        {
            ans = 'R';
            break;
        }
    }
    if (ans != '.')
    {
        cout << ans << endl;
        return;
    }

    FOR(i, 0, 8)
    {
        int Rcount = 0;
        int Bcount = 0;
        FOR(j, 0, 8)
        {
            if (a[j][i] == 'B')
            {
                Bcount++;
            }
        }
        if (Bcount == 8)
        {
            ans = 'B';
            break;
        }
    }

    cout << ans << endl;
    return;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}