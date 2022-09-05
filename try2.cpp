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

using namespace std;

int main()
{
    int t;
    cin >> t;
start:
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        int power[n];
        FOR(i, 0, n)
        {
            cin >> power[i];
        }

        set<int> range;

        int UsedRange = -1;

        bool spoiled = 0;

        int MaxReach = -1;

        int ans = 0;

        FOR(i, 0, n)
        {
            if (st[i] == 'B' && UsedRange < i)
            {
                UsedRange = MaxReach;
                if (i > UsedRange)
                {
                    cout << "-1" << endl;
                    goto start;
                }
                ans++;
                if (i + power[i] > MaxReach)
                {
                    MaxReach = i + power[i];
                }
            }
            else
            {
                if (i + power[i] > MaxReach)
                {
                    MaxReach = i + power[i];
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}