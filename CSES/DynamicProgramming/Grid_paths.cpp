#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int dp[1000][1000];
char c[1000][1000];

int dpf(int i, int j, int n)
{
    if (c[i][j] == '*')
    {
        return dp[i][j] = 0;
    }

    if (i < 0 || j < 0)
    {
        return 0;
    }

    if (i == 0 && j == 0)
    {
        return 1;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    return dp[i][j] = (dpf(i - 1, j, n) + dpf(i, j - 1, n)) % mod;
}

void solve()
{
    int n;
    cin >> n;
    FOR(i, 0, n)
    {
        FOR(j, 0, n)
        {
            cin >> c[i][j];
        }
    }
    FOR(i, 0, n)
    {
        FOR(j, 0, n)
        {
            dp[i][j] = -1;
        }
    }

    cout << dpf(n - 1, n - 1, n);
    return;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}