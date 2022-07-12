#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define ll long long int
#define FOR(a, b, c) for (ll a = b; a < c; a++)

using namespace std;

ll KnightMoves(ll i)
{
    if (i <= 1)
    {
        cout << "0" << endl;
        return 0;
    }
    else if (i == 2)
    {
        cout << "0\n6" << endl;
        return 6;
    }
    else if (i == 3)
    {
        cout << "0\n6\n28" << endl;
        return 28;
    }

    ll x = KnightMoves(i - 1);

    // managing lines
    // x += (i * (i - 1)) / 2;
    int a = i - 4;
    if (a > 0)
    {
        x += (a * (i - 1) * i) - (4 * a);
    }
    x += (2 * (i - 1) * i) - 6;
    x += (2 * (i - 1) * i) - 4;

    // managing columns

    int b = i - 4;
    if (b > 0)
    {
        x += (b * (i - 1) * i) - (4 * b);
    }
    x += (2 * (i - 1) * i) - 6;
    x += (i - 1) * i ;

    cout << x << endl;
    return x;
}

int main()
{
    ll t;
    cin >> t;
    ll count = KnightMoves(t);
    return 0;
}