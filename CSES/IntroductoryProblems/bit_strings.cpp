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
    ll t;
    cin >> t;
    int x = 1;
    int dec = pow(10, 9) + 7;
    while (t--)
    {
        x *= 2;
        if (x > dec)
        {
            x %= dec;
        }
    }
    cout << x;
    return 0;
}