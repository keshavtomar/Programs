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
#define vi vector<ll>

using namespace std;

void solve()
{
    ll n, k, m;
    cin >> n >> k;
    vi a(n);
    FOR(i, 0, n)
    {
        cin >> a[i];
    }
    cin >> m;
    vi b(m);
    FOR(i, 0, m)
    {
        cin >> b[i];
    }

    vector<pair<ll, ll>> x{{0, 0}}, y{{0, 0}};

    FOR(i, 0, n)
    {
        ll count = 1;
        while (a[i] % k == 0)
        {
            count *= k;
            a[i] /= k;
            // cout<<"> ";
        }

        if (a[i] == x.back().first)
        {
            x.back().second += count;
        }
        else
        {
            x.pb({a[i], count});
        }
    }
    FOR(i, 0, m)
    {
        ll count = 1;
        while (b[i] % k == 0)
        {
            count *= k;
            b[i] /= k;
        }

        if (b[i] == y.back().first)
        {
            y.back().second += count;
        }
        else
        {
            y.pb({b[i], count});
        }
    }

    if (x == y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// 1 3 3 3 3 3 1 9