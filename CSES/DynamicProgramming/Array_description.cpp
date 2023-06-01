#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int dp[100001][101];

int helper(int lastValue, int i, int n, int *arr, int m)
{
    if (i == n)
    {
        return 1;
    }

    if (dp[i][lastValue] != -1)
    {
        return dp[i][lastValue];
    }

    if ((abs(lastValue - arr[i]) > 1 && arr[i] != 0) || lastValue > m || lastValue < 1)
    {
        return dp[i][lastValue] = 0;
    }

    if (arr[i] != 0)
    {
        return dp[i][lastValue] = helper(arr[i], i + 1, n, arr, m) % mod;
    }
    else
    {
        return dp[i][lastValue] = (helper(lastValue - 1, i + 1, n, arr, m) + helper(lastValue, i + 1, n, arr, m) + helper(lastValue + 1, i + 1, n, arr, m)) % mod;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }
    FOR(i, 0, n + 1)
    {
        FOR(j, 0, 101)
        {
            dp[i][j] = -1;
        }
    }

    int ans = 0;
    if (arr[0] == 0)
    {
        FOR(i, 1, m + 1)
        {
            ans += helper(i, 0, n, arr, m) % mod;
        }
    }
    else
    {
        ans = helper(arr[0], 0, n, arr, m);
    }

    cout << ans;
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