#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <functional>
#include <numeric>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

bool isvalid(int arr[], int n, int k, ll m)
{
    ll sum = 0;
    ll no_of_divisions_needed = 1;
    FOR(i, 0, n)
    {
        sum += arr[i];
        if (sum > m)
        {
            no_of_divisions_needed++;
            sum = arr[i];
        }
    }

    if (no_of_divisions_needed <= k)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ll solve(int arr[], int n, int k)
{
    ll start = *max_element(arr, arr + n);
    ll end = 0;
    FOR(i, 0, n)
    {
        end += arr[i];
    }

    ll candidate = -1;

    while (start <= end)
    {
        ll mid = (start + end) / 2;

        if (isvalid(arr, n, k, mid))
        {
            end = mid - 1;
            candidate = mid;
        }
        else
        {
            start = mid + 1;
        }
    }

    return candidate;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[200000];
    FOR(i, 0, n)
    {
        cin >> arr[i];
    }

    ll minimisedMaximumsum = solve(arr, n, k);

    cout << minimisedMaximumsum << endl;
    return 0;
}