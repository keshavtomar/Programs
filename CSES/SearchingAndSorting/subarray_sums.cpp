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

using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    int a[n];
    vi prefixsum(n + 1); // 2,1,3,8,1
    prefixsum[0] = 0;
    FOR(i, 0, n)
    {
        cin >> a[i];
        prefixsum[i + 1] = prefixsum[i] + a[i]; // 0,2,3,6,14,15
    }

    // for (auto cs : prefixsum)
    // {
    //     cout << cs << " ";
    // }

    ll sums = 0;

    int itup = 1;
    int itdown = 0;

    while (itup <= n)
    {
        int x = prefixsum[itup] - prefixsum[itdown];
        if (x == target)
        {
            sums++;
            itup++;
            itdown++;
        }
        else if (x < target)
        {
            itup++;
        }
        else
        {
            itdown++;
        }
    }

    cout << sums;

    return 0;
}