// we have to find the index k at which array is rotated
// array should contain unique elements

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

int searchRotatedIndex(vector<int> &nums)
{
    int start = 0;
    int n = nums.size();
    int end = n - 1;

    vector<int> temp;

    int pivot = -1; // smallest element index

    while (start <= end)
    {
        int mid = (start + end) / 2;

        int next = (mid + 1) % n; // if our mid is last element than doing it's modulus with n, makes sure that it will get compared to 0th element
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

    return pivot;
}

int main()
{
    vector<int> vc = {11, 12, 15, 16, 8};
    //--------------- 0    1   2   3  4  5  6  7

    int ind = searchRotatedIndex(vc);

    if (ind == -1)
    {
        cout << "array is not rotated at all" << endl;
    }
    else
    {
        cout << "array is rotated at index " << ind << endl;
    }

    return 0;
}