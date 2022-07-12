#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <climits>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll unsigned long long int

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll n = max(x, y);
        ll num = pow(n - 1, 2);
        num += n;
        if ((n & 1) == 1)
        {
            if (x < y)
            {
                num += (max(x, y) - min(x, y));
            }
            else
            {
                num -= (max(x, y) - min(x, y));
            }
        }
        else
        {
            if (x < y)
            {
                num -= (max(x, y) - min(x, y));
            }
            else
            {
                num += (max(x, y) - min(x, y));
            }
        }
        cout << num << endl;
    }
    return 0;
}