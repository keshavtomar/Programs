#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

int main()
{
    ll n, m;
    vector<ll> vc; //{height,{damage going right, damage going left}}

    cin >> n >> m;

    ll curr;
    FOR(i, 0, n)
    {
        cin >> curr;
        vc.pb(curr);
    }

    ll rightdamage[n] = {0};
    ll leftdamage[n] = {0};
    FOR(i, 1, n)
    {
        if (vc[i] < vc[i - 1])
        {
            rightdamage[i] = rightdamage[i - 1] + vc[i - 1] - vc[i];
        }
        else
        {
            rightdamage[i] = rightdamage[i - 1];
        }
        // cout << rightdamage[i] << " ";
    }
    // cout << endl;

    for (int i = n - 2; i >= 0; i--)
    {
        if (vc[i] < vc[i + 1])
        {
            leftdamage[i] = leftdamage[i + 1] + vc[i + 1] - vc[i];
        }
        else
        {
            leftdamage[i] = leftdamage[i + 1];
        }
        // cout << leftdamage[i] << " ";
    }
    // cout << endl;

    while (m--)
    {
        ll s, t;
        cin >> s >> t;
        s--;
        t--;
        if (s < t)
        {
            cout << rightdamage[t] - rightdamage[s] << endl;
        }
        else
        {
            cout << leftdamage[t] - leftdamage[s] << endl;
        }
    }

    return 0;
}