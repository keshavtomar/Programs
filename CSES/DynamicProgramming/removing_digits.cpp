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
    int n;
    cin >> n;
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1e6 + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp != 0)
        {
            if (i >= temp % 10)
            {
                dp[i] = min(dp[i], 1 + dp[i - temp % 10]);
            }
            temp = temp / 10;
        }
    }
    cout << dp[n];
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