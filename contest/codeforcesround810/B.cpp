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

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1];

        vector<pair<int, int>> friends(m);

        int freq[n + 1] = {0};

        FOR(i, 1, n + 1)
        {
            cin >> a[i];
        }
        FOR(i, 0, m)
        {
            cin >> friends[i].first >> friends[i].second;
            freq[friends[i].first]++;
            freq[friends[i].second]++;
        }

        if (m % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            int ans = INT32_MAX;

            FOR(i, 1, n + 1)
            {
                if (freq[i] % 2 == 1)
                {
                    ans = min(ans, a[i]);
                }
            }

            FOR(i, 0, m)
            {
                if (freq[friends[i].first] % 2 == 0 && freq[friends[i].second] % 2 == 0)
                {
                    ans = min(ans, a[friends[i].first] + a[friends[i].second]);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}