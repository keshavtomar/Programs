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

/*
This is the kind of unbounded knapsack, in which we just have to change the code of perfect sum a
little bit, in this we can consider an element multiple times and we have to return the no of
ways in which we can make a particular sum

ex-> value to make = 4,
coins available 3, arr[]={1,2,3};
output = 4, namely {1,1,1,1}, {1,1,2}, {1,3}, {2,2}

// remember : {1,1,2} and {1,2,1} are same


approach-> just we will stay at the same element when we took it once
*/

using namespace std;

class Solution
{
public:
    long long int dp[1002][1002];
    Solution()
    {
        for (int i = 0; i < 1002; i++)
        {
            for (int j = 0; j < 1002; j++)
            {
                if (i == 0)
                {
                    dp[i][j] = 0;
                }
                if (j == 0)
                {
                    dp[i][j] = 1;
                }
            }
        }
    }

    long long int count(int S[], int m, int n)
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (S[i - 1] > j)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - S[i - 1]];
                }
            }
        }

        return dp[m][n];
    }
};

int main()
{
    int value = 4, len = 3;
    int arr[] = {1, 2, 3};
    Solution s1;
    cout << s1.count(arr, 3, 4);
    return 0;
}