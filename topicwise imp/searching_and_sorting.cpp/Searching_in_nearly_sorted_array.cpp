// use binary search in nearly sorted array
//  a nearly sorted array is in which each element may be shifted to 1 left, 1 right, or none, from it's exact position
//  sometimes it is k shifted
//  find the ind of an element in nearly shifted array using binary search

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

int findinNearlyshifted(vector<int> &vc, int x)
{
    int start = 0;
    int n = vc.size();
    int end = n - 1;
    while (start <= end)
    {
        // for each mid, check mid, its 1 right and 1 left element, if found return index, else shift accordingly, beware of cornercases

        int mid = (start + end) / 2;
        int beforeMid = mid - 1;
        int afterMid = mid + 1;
        if (x == vc[mid])
        {
            return mid;
        }
        else if (beforeMid >= 0 && vc[beforeMid] == x)
        {
            return beforeMid;
        }
        else if (afterMid < n && vc[afterMid] == x)
        {
            return afterMid;
        }
        else if (vc[mid] > x)
        {
            // go left
            end = mid - 2;
        }
        else if (vc[mid] < x)
        {
            // go right
            start = mid + 2;
        }
    }
    return -1;
}

int main()
{
    vector<int> vc = {2, 1, 3, 7, 6, 11, 13, 21, 20};

    int x;
    cin >> x;

    int ind = findinNearlyshifted(vc, x);

    if (ind == -1)
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found at index " << ind << endl;
    }

    return 0;
}