#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

bool isSubsetSum(vector<int> arr, int sum)
{
    bool dp[arr.size() + 1][sum + 1];

    // initialisation
    FOR(i, 0, arr.size() + 1)
    {
        FOR(j, 0, sum + 1)
        {
            if (i == 0)
            {
                dp[i][j] = false;
            }
            if (j == 0)
            {
                dp[i][j] = true;
            }
        }
    }

    FOR(i, 1, arr.size() + 1)
    {
        FOR(j, 1, sum + 1)
        {
            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - arr[i - 1]]);
            }
        }
    }

    return dp[arr.size()][sum];
}

int main()
{
    vi arr = {5, 1, 4, 9};
    int x = 2;

    // check if any subset of array can sum to 12

    cout << isSubsetSum(arr, x);

    return 0;
}