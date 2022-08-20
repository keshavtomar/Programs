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

/*
This question is similar to subset_sum_problem, In this question we have to determine whether the
given array can be partitioned into two subarrays having equal sum.

Approach -> Find the total sum t_sum of the array, simply we have to determine whether we have a
subset present in the array whose sum is t_sum/2, then the other sum also would definately be
the same
*/

using namespace std;

bool isSubsetSum(int arr[], int N, int Sum)
{
    bool dp[N + 1][Sum + 1];
    FOR(i, 0, N + 1)
    {
        FOR(j, 0, Sum + 1)
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

    FOR(i, 1, N + 1)
    {
        FOR(j, 1, Sum + 1)
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

    return dp[N][Sum];
}

int equalPartition(int N, int arr[])
{
    int sum = 0;
    FOR(i, 0, N)
    {
        sum += arr[i];
    }
    if (sum % 2 != 0)
    {
        return 0;
    }
    else
    {
        return isSubsetSum(arr, N, sum / 2);
    }
}

int main()
{
    int arr[] = {899, 74, 789, 978, 133, 957, 690, 114, 9, 942, 791};
    cout << equalPartition(11, arr);
    return 0;
}