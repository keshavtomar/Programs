#include <bits/stdc++.h>

/*
In this question, we have given a rod, we have to sell it for maximum profit, we have been given
an array with the prices at which different lengths of rod are sold, we can cut the rod of
any size


ex->
length   | 1   2   3   4   5   6   7   8
--------------------------------------------
price    | 3   5   8   9  10  17  17  20


maximum profit made = 22, by cutting rod of lengths 2 and 6
*/

using namespace std;

int dp[1002][1002];

int helper(int arr[], int price[], int n)
{
    // initialising dp table
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], price[i - 1] + dp[i][j - arr[i - 1]]);
            }
        }
    }

    return dp[n][n];
}

int cutRod(int price[], int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    return helper(arr, price, n);
}

int main()
{
    int N = 8;
    int price[] = {3, 5, 8, 9, 10, 17, 17, 20};

    cout << cutRod(price, N);
    return 0;
}