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
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        int arr[k];
        FOR(i, 0, k)
        {
            cin >> arr[i];
        }

        // checking for rowsize x
        bool flag = 0;
        ll total = 0;

        FOR(i, 0, k)
        {
            if (arr[i] / x > 2)
            {
                flag = 1;
            }
            if (arr[i] / x >= 2)
            {
                total += arr[i] / x;
            }
        }

        if (total >= y && (flag || (y % 2 == 0)))
        {
            cout << "Yes" << endl;
            continue;
        }

        // checking for rowwise
        flag = 0;
        total = 0;

        FOR(i, 0, k)
        {
            if (arr[i] / y > 2)
            {
                flag = 1;
            }
            if (arr[i] / y >= 2)
            {
                total += arr[i] / y;
            }
        }

        if (total >= x && (flag || x % 2 == 0))
        {
            cout << "Yes" << endl;
            continue;
        }

        cout << "No" << endl;
    }
    return 0;
}