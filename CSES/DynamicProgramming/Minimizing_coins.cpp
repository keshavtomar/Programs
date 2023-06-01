#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
// #define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    vector<vector<int>> dp(n + 1, vector<int>(x + 1));
    FOR(i, 0, n)
    {
        cin >> c[i];
    }

    for (int i = 0; i <= x; i++)
    {
        dp[0][i] = 1e6 + 1;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j < c[i - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - c[i - 1]]);
            }
        }
    }

    if (dp[n][x] >= 1e6 + 1)
    {
        cout << -1;
    }
    else
    {
        cout << dp[n][x];
    }
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