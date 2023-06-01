#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int dp[1000001];
int coins[101];

int dpf(int x, int n)
{
    if (x < 0)
    {
        return 0;
    }
    if (x == 0)
    {
        return dp[x] = 1;
    }

    if (dp[x] != -1)
    {
        return dp[x];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = dpf(x - coins[i], n);
        if (l != -1)
        {
            ans = (ans + l) % mod;
        }
    }
    return dp[x] = ans;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    FOR(i, 0, n)
    {
        cin >> coins[i];
    }
    FOR(i, 0, 1000001)
    {
        dp[i] = -1;
    }
    cout << dpf(x, n);
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