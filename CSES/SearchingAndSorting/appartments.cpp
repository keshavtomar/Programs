// this is solved using two pointers concept told in LONGA VITA BREVIS video

#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a, b;
    vector<ll> va;
    vector<ll> vb;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        va.pb(a);
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b;
        vb.pb(b);
    }

    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());

    auto ita = va.begin();
    auto itb = vb.begin();

    while (ita != va.end() && itb != vb.end())
    {
        // cout << " first iterator at " << *ita << " and second at " << *itb << endl;
        if ((*itb >= *ita - k) && (*itb <= *ita + k))
        {
            count++;
            ita++;
            itb++;
        }
        else if (*itb < *ita - k)
        {
            itb++;
        }
        else if (*itb > *ita + k)
        {
            ita++;
        }
    }

    cout << count;

    return 0;
}