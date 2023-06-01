#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define mod 1000000007

using namespace std;

int dp[1001][100001];
int prices[1000];
int pages[1000];

int dpf(int n, int x)
{
    // i is the book, j is the price we have left
    FOR(i, 0, n + 1)
    {
        FOR(j, 0, x + 1)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }
    FOR(i, 1, n + 1)
    {
        FOR(j, 1, x + 1)
        {
            if (j < prices[i - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], pages[i - 1] + dp[i - 1][j - prices[i - 1]]);
            }
        }
    }
    return dp[n][x];
}

void solve()
{
    int n, x;
    cin >> n >> x;
    FOR(i, 0, n)
    {
        cin >> prices[i];
    }
    FOR(i, 0, n)
    {
        cin >> pages[i];
    }

    cout << dpf(n, x);
    return;
}

int32_t main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}