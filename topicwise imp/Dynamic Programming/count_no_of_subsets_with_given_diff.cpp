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
In this question we have given a diff d, and an array arr, we have to count the no of partitions
of arr we can make such that their diff is d

// Let the sum of partitions are S1 and S2
    S1-S2=d;
    S1+S2=totalsum;
    2*S1=d+totalsum;
    S1 = (d+totalsum)/2;

    So we have to count the no of subsets of array whose sum is this S2, now this is similar to
    perfect_sum

*/

using namespace std;

int count_of_partitions(int arr[], int n, int d)
{
    int totalsum = 0;
    FOR(i, 0, n)
    {
        totalsum += arr[i];
    }

    if (totalsum % 2 != d % 2)
    {
        return 0;
    }

    int x = (d + totalsum) / 2;

    int dp[n + 1][x + 1];

    FOR(i, 0, x + 1)
    {
        dp[0][i] = 0;
    }

    FOR(i, 0, n + 1)
    {
        dp[i][0] = 1;
    }

    FOR(i, 1, n + 1)
    {
        FOR(j, 1, x + 1)
        {
            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
            }
        }
    }

    return dp[n][x];
}

int main()
{
    int arr[] = {1, 1, 2, 3};
    int d = 1;
    cout << count_of_partitions(arr, 4, d);
    return 0;
}