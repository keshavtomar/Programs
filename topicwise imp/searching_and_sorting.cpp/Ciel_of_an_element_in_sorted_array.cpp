// Given a sorted array and a value x, the ceiling of x is the smallest element in an array greater than or equal to x,

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

bool ciel(vector<int> &arr, int x, int &cielValue)
{
    int start = 0;
    int n = arr.size();
    int end = n - 1;
    int candidate;

    if (x > arr[end])
    {
        return false;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == x)
        {
            cielValue = x;
            return true;
        }
        else if (arr[mid] < x)
        {
            // goto right, this element does not satisfy the condition of being a candidate
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            // goto left, also this element is a candidate, if no other more suitable element found
            candidate = arr[mid];
            end = mid - 1;
        }
    }
    cielValue = candidate;
    return true;
}

int main()
{
    vector<int> vc = {-5, 1, 4, 4, 5, 8, 11, 13, 15};
    int x;
    cin >> x;

    int cielValue;

    bool valueExist = ciel(vc, x, cielValue);

    if (valueExist)
    {
        cout << "Ciel of " << x << " in the array is " << cielValue << endl;
    }
    else
    {
        cout << "Ciel of " << x << " does not exist in the array" << endl;
    }
    return 0;
}