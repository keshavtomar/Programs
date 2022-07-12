#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int search(vector<int> &nums, int target)
{
    int start = 0;
    int n = nums.size();
    int end = n - 1;

    vector<int> temp;

    int pivot = -1; // smallest element index

    // if (nums[start] < nums[end])
    // {
    //     if (binary_search(nums.begin(), nums.end(), target))
    //     {
    //         int x = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    //         return x;
    //     }
    //     else
    //     {
    //         return -1;
    //     }
    // }

    cout << "entering main loop" << endl;

    while (start <= end)
    {
        cout << "running main loop" << endl;
        cout << "start is " << start << " end is " << end << endl;
        int mid = (start + end) / 2;

        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        if (nums[mid] < nums[next] && nums[mid] < nums[prev])
        {
            pivot = mid;
            break;
        }
        else if (nums[0] <= nums[mid])
        {
            // left is sorted, go right
            start = mid + 1;
        }
        else if (nums[mid] <= nums[n - 1])
        {
            // right is sorted, go left
            end = mid - 1;
        }
    }

    cout << pivot << endl;

    if (pivot != -1)
    {
        FOR(i, pivot, n)
        {
            temp.push_back(nums[i]);
        }
        FOR(i, 0, pivot)
        {
            temp.push_back(nums[i]);
        }
    }

    for (auto it : temp)
    {
        cout << it << " ";
    }

    return 0;
}

int main()
{
    vector<int> vc = {11, 2, 4, 6, 8};
    //--------------- 0    1   2   3  4  5  6  7

    cout << "here we go" << endl;

    int ind = search(vc, 5);

    return 0;
}