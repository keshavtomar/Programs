//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define mod (int)1e9 + 7

int dp[1002][1002];

class Solution
{

public:
    Solution()
    {
        FOR(i, 0, 1002)
        {
            FOR(j, 0, 1002)
            {
                dp[i][j] = -1;
            }
        }
    }

    int perfectSum(int arr[], int n, int sum)
    {
        if (n == 0)
        {
            if (sum == 0)
            {
                return dp[n][sum] = 1;
            }
            return dp[n][sum] = 0;
        }

        if (dp[n][sum] != -1)
        {
            return dp[n][sum];
        }

        int count;
        if (arr[n - 1] > sum)
        {
            count = perfectSum(arr, n - 1, sum);
        }
        else
        {
            count = perfectSum(arr, n - 1, sum) + perfectSum(arr, n - 1, sum - arr[n - 1]);
        }

        return dp[n][sum] = count % mod;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;
        cout << ob.perfectSum(a, n, sum) << "\n";
    }
    return 0;
}

// } Driver Code Ends