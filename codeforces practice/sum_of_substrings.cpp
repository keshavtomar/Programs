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
        ll n, k;
        cin >> n >> k;
        string st;
        cin >> st;

        int noofones = 0, firstone = n, lastone = -1;
        for (int p = 0; p < n; p++)
        {
            if (st[p] != '1')
                continue;
            noofones += 1;
            if (firstone == n)
                firstone = p;
            lastone = p;
        }

        ll add = 0;
        // moving the last one to last position
        if (noofones > 0 and (n - 1 - lastone) <= k)
        {
            k -= (n - 1 - lastone);
            add += 1;
            noofones -= 1;
        }
        // moving the first one to first position
        if (noofones > 0 and firstone <= k)
        {
            k -= (firstone);
            add += 10;
            noofones -= 1;
        }
        cout << 11 * noofones + add << "\n";
    }
    return 0;
}