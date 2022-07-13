// Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x.

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

bool floor(vector<int> &vc, int x, int &floor)
{
    int start = 0;
    int n = vc.size();
    int candidate;
    int end = n - 1;

    if (x < vc[0])
    {
        return false;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vc[mid] == x)
        {
            floor = mid;
            return true;
        }
        else if (vc[mid] < x)
        {
            candidate = vc[mid]; // it will be a candidate if something else, more closer to x not found

            // go right
            start = mid + 1;
        }
        else if (vc[mid] > x)
        {
            // go left, and it doesn't hold the qualities of being a candidate
            end = mid - 1;
        }
    }

    floor = candidate;
    return true;
}

int main()
{
    vector<int> vc = {-5, 1, 4, 4, 5, 8, 11, 13, 15};
    int x;
    cin >> x;

    int floorValue;

    bool valueExist = floor(vc, x, floorValue);

    if (valueExist)
    {
        cout << "Floor of " << x << " in the array is " << floorValue << endl;
    }
    else
    {
        cout << "Floor of " << x << " does not exist in the array" << endl;
    }

    return 0;
}