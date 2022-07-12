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

// 9*1 90*2 900*3 9000*4

int main()
{
    int t;
    cin >> t;
    vector<ll> vc;
    ll a = 0;
    ll count = 0;
    while (a < pow(10, 18))
    {
        a += (count + 1) * (9 * pow(10, count));
        count++;
        vc.pb(a);
    }
    while (t--)
    {
        ll n;
        cin >> n;
        ll passeddigit = 0;
        while (n > vc[passeddigit])
        {
            passeddigit++;
        }

        ll gone = pow(10, passeddigit) - 1;

        ll leftweapons = n - vc[passeddigit - 1];

        ll digitlengthnow = passeddigit + 1;

        ll moregone = gone + leftweapons / digitlengthnow;

        ll finalleft = leftweapons % digitlengthnow;

        if (!finalleft)
        {
            cout << moregone % 10 << endl;
        }
        else
        {
            string st = to_string(moregone + 1);
            cout << st[finalleft - 1] << endl;
        }
    }
    return 0;
}

// 9 189 2889 38889 488889 5888889 68888889 788888889 8888888889 98888888889 1088888888889 11888888888889 128888888888889 1388888888888889 14888888888888889 158888888888888888 1688888888888888896