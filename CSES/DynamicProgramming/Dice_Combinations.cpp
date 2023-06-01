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

int dpf(int n)
{
    if (n == 0)
    {
        return dp[0] = 1;
    }
    if (n < 0)
    {
        return -1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        int x = dpf(n - i);
        if (x != -1)
        {
            ans += x % mod;
        }
    }
    return dp[n] = ans % mod;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cout << dpf(n);
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