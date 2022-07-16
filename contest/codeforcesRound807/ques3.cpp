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
        ll n, c, q;
        cin >> n >> c >> q;
        string st;
        cin >> st;
        vector<ll> len, firstIndex; // lenght till here
        len.pb(st.length());
        firstIndex.pb(0);
        FOR(i, 1, c + 1)
        {
            ll l, r;
            cin >> l >> r;
            ll lenHere = len[i - 1] + r - l + 1;
            len.pb(lenHere);
            firstIndex.pb(l);
        }
        FOR(i, 0, q)
        {
            int currq;
            cin >> currq;
            
            cout << st[currq - 1] << endl;
        }
    }
    return 0;
}