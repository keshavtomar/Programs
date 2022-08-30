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
In this problem we have been given an array, we have to reach a target by adding all elements in
the array, but we can add + or - sign in front of each element by ourselves, by how many ways
we can reach the target by adding + or - sign sequesnce differently

ex arr[]={1,1,2,3} target = 1;
ways are 1,1,2,-3     1,-1,-2,3    -1,1,-2,3
ans = 3

Approach, if we analyse carefully this problem is almost similar to count_no_of_subsets_with_given_diff
 and the target we are given with is actually diff.      So we have to count the no of ways in
 which we can divide our array such that the difference b/w two array is our target
 let the sum of divided arr is S1 and S2
 S1-S2=target
 S1+S2=totalsum
 2*S1=target+totalsum
 S1 = (target+totalsum)/2

This now goes to one more basic problem, in which we have to count the no of subsets made from
the array whose sum is S1.  problem name is = perfect_sum







******************************************Special Note*****************************************


NOTE-> But in top-down approach solving of these questions an error comes when 0 is encountered
in the given array, so it is always good to solve these with recursion and memoize

To avoid this error of 0's always count the number of zeroes in the array, and your final
ans would be  ans = dp[n][sum] * pow(2,cnt);












*/

using namespace std;

int dp[21][1002];

int findTargetSumWays(vector<int> &nums, int target)
{
    int totalsum = 0;

    int zerocnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zerocnt++;
        }
        totalsum += nums[i];
    }

    int n = nums.size();

    if (abs(target) > totalsum)
    {
        return 0;
    }

    if (totalsum % 2 != target % 2) // IMP
    {
        return 0;
    }

    // initialisation of dp table
    int sumtofind = (totalsum + target) / 2;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sumtofind + 1; j++)
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

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sumtofind + 1; j++)
        {
            if (nums[i - 1] > j || nums[i - 1] == 0)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
            }
        }
    }

    return dp[n][sumtofind] * pow(2, zerocnt);
}

int main()
{
    vi vcc = {1, 1, 2, 3};
    cout << findTargetSumWays(vcc, 1);
    return 0;
}