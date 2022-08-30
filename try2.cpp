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

int maxPages(int price[], int pages[], int x, int n, vector<vector<int>> &dp)
{
    if (x == 0 || n == 0)
    {
        return dp[n][x] = 0;
    }
    if (dp[n][x] != -1)
    {
        return dp[n][x];
    }

    if (price[n - 1] > x)
    {
        return dp[n][x] = maxPages(price, pages, x, n - 1, dp);
    }
    else
    {
        return dp[n][x] = max((pages[n - 1] + maxPages(price, pages, x - price[n - 1], n - 1, dp)), maxPages(price, pages, x, n - 1, dp));
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    int price[n], pages[n];
    FOR(i, 0, n)
    {
        cin >> price[i];
    }
    FOR(i, 0, n)
    {
        cin >> pages[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));

    cout << maxPages(price, pages, x, n, dp);
    return 0;
}