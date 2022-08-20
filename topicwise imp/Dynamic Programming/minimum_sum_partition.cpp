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
In this problem, we have been given an array, we have to divide that array in two parts such that
the difference of sums of those arrays will be minimum, and we have to return that minimum possible
difference, ex given array is {1,5,5,7};   it's possible sums are {1,6,8,11,13,18} and it's best
answer comes to 2 when we divide it as {1,7} , {5,5}

Approach,-> We can do this by finding out all the possible sums of the array, we can find the total
sum by iterating, let's say S1 and S2 are the sums of our optimally divided arrays(our answer),
then S2 = totalsum-S1;
Our answer is going to be abs(d) = S2-S1;
                    abs(d) = totalsum-2*S1;

To avoid this abs function once we find our possible sums array, we will search upto only half
values of tatal sum, like if totalsum is 18 we will search possible values upto 9, in our ex problem
it comes out to be 8 so our ans was, d = 18 - 2*8 = 2


Now the only question we are left with is how we can find out possible subset sums of an array
We have already done this problem, that if a particular sum is possible to create from the subset
of an array, in Subset_sum_problem.
If we notice carefully, the true values in the last row of dp table of subset sum problem, tells us
that if this sum is possible to create, store them in a vector and find your answer
*/

using namespace std;

int minDifference(int arr[], int n)
{
    int totalsum = 0;
    FOR(i, 0, n)
    {
        totalsum += arr[i];
    }
    bool dp[n + 1][totalsum + 1];

    FOR(i, 0, n + 1)
    {
        FOR(j, 0, totalsum + 1)
        {
            if (j == 0)
            {
                dp[i][j] = true;
            }
            else
            {
                dp[i][j] = false;
            }
        }
    }

    FOR(i, 1, n + 1)
    {
        FOR(j, 1, totalsum + 1)
        {
            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
        }
    }

    // table filled,

    for (int i = totalsum / 2; i >= 0; i--)
    {
        if (dp[n][i] == true)
        {
            return totalsum - 2 * i;
        }
    }
}

int main()
{
    int N = 1, arr[] = {100000};

    int ans = minDifference(arr, N);

    cout << ans;

    return 0;
}