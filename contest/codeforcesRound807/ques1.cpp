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
        int n, x;
        cin >> n >> x;
        vector<int> vc;
        int k;
        FOR(i, 0, 2 * n)
        {
            cin >> k;
            vc.pb(k);
        }
        sort(vc.begin(), vc.end());
        bool possible = true;
        FOR(i, 0, n)
        {
            if (vc[i + n] < vc[i] + x)
            {
                possible = false;
                break;
            }
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