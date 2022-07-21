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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> vc;

        bool possible = true;

        vc.pb(l);

        FOR(i, 2, n + 1)
        {
            int x = vc.back() % i;
            if (x)
                l += (i - x);
            vc.pb(l);
        }
        if (l > r)
        {
            possible = false;
        }
        if (possible)
        {
            cout << "YES" << endl;
            for (auto it : vc)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}