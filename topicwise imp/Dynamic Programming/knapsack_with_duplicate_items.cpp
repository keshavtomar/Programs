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

int dp[1002][1002];

int knapSack(int N, int W, int val[], int wt[])
{
    // table initialisation
    FOR(i, 0, N + 1)
    {
        FOR(j, 0, W + 1)
        {
            // if limit(j) of our bag is zero, we cannot fill any item, so our ans is 0, else if
            // there are no items in the list then also we cannot fill anything in our bag,
            // hence our ans is 0
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    FOR(i, 1, N + 1)
    {
        FOR(j, 1, W + 1)
        {
            if (wt[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], val[i - 1] + dp[i][j - wt[i - 1]]);
            }
        }
    }

    return dp[N][W];
}

int main()
{
    int N = 4, W = 8, val[] = {1, 4, 5, 7}, wt[] = {1, 3, 4, 5};
    cout << knapSack(N, W, val, wt);
    return 0;
}