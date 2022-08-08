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
        ll n;
        cin >> n;
        ll arr[n];
        FOR(i, 0, n)
        {
            cin >> arr[i];
        }

        bool possible = true;

        ll previous = 0;

        ll itshouldbe;

        int i;

        for (i = 0; i < n - 1; i++)
        {
            itshouldbe = -previous;
            if (arr[i] < itshouldbe)
            {
                possible = false;
                break;
            }
            previous = arr[i] - itshouldbe;

            if (previous == 0)
            {
                i++;
                break;
            }
        }

        for (; i < n - 1; i++)
        {
            if (arr[i] != 0)
            {
                possible = false;
            }
        }

        if (arr[n - 1] != -previous)
        {
            possible = false;
        }

        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}