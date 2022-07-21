#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <climits>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<ll>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi vc(n + 1);
        FOR(i, 1, n + 1)
        {
            cin >> vc[i];
        }

        ll maxt = 0;

        if (n & 1 == 1)
        {
            for (ll i = 2; i <= n - 1; i += 2)
            {
                ll t = max(vc[i - 1], vc[i + 1]) - vc[i] + 1;
                if (t > 0)
                {
                    maxt += t;
                }
            }
        }
        else
        {
            ll lastpoller;
            for (ll i = 2; i <= n - 1; i += 2)
            {
                ll t = max(vc[i - 1], vc[i + 1]) - vc[i] + 1;
                if (t > 0)
                {
                    maxt += t;
                }
                lastpoller = i;
            }
            lastpoller++;

            ll previous = maxt;

            while (lastpoller > 1)
            {
                ll level = previous;
                ll t_this = max(vc[lastpoller - 1], vc[lastpoller + 1]) - vc[lastpoller] + 1;
                if (t_this < 0)
                {
                    t_this = 0;
                }
                ll t_before = max(vc[lastpoller - 2], vc[lastpoller]) - vc[lastpoller - 1] + 1;
                if (t_before < 0)
                {
                    t_before = 0;
                }
                level = level + t_this - t_before;
                if (level < maxt)
                {
                    maxt = level;
                }
                previous = level;

                lastpoller -= 2;
            }
        }
        cout << maxt << endl;
    }
    return 0;
}