#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int coinChange(int *coins, int n, int amount)
{
    int dp[n + 1][amount + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            if (j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (j < coins[i - 1])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - coins[i - 1]]) % mod;
            }
        }
    }
    return dp[n][amount];
}

int main()
{
    int n, amount;
    cin >> n >> amount;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << coinChange(coins, n, amount) << endl;
    return 0;
}
