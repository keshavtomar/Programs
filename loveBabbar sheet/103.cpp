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

int binarySearch(vector<int> &vc, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (vc[mid] == target)
        {
            return mid;
        }
        else if (vc[mid] < target)
        {
            // target is in the right
            start = mid + 1;
        }
        else
        {
            // target is in the left
            end = mid - 1;
        }
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int start = 0;
    int n = nums.size();
    int end = n - 1;

    vector<int> temp;

    int pivot = -1; // smallest element index

    while (start <= end)
    {
        int mid = (start + end) / 2;

        int next = (mid + 1) % n; // if our mid is last element than doing it's modulus with n, makes sure                that it will get compared to 0th element
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
    if (pivot != -1)
    {
        int ind1 = binarySearch(nums, 0, pivot - 1, target);
        int ind2 = binarySearch(nums, pivot, n - 1, target);

        if (ind1 != -1)
        {
            return ind1;
        }
        else if (ind2 != -1)
        {
            return ind2;
        }
        else
        {
            return -1;
        }
    }

    else
    {
        return binarySearch(nums, 0, n - 1, target);
    }
}

int main()
{
    vector<int> vc = {4, 5, 6, 7, 0, 1, 2};

    int ind = search(vc, 0); // search for the index of 0 in vc

    cout << ind << endl;

    return 0;
}