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

void solve()
{
    ll a, b;
    cin >> a >> b;
    bool possible = true;
    if ((a + b) % 3 != 0)
    {
        possible = false;
    }

    if (a > 2 * b || b > 2 * a)
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}