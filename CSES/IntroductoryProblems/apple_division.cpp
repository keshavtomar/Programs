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

void minimiseDifference(vector<ll> vc, ll &minDiff, ll sumx, ll sumy)
{
    if (vc.size() == 0)
    {
        if (abs(sumx - sumy) < minDiff)
        {
            minDiff = abs(sumx - sumy);
        }
        return;
    }

    ll k = vc.back();
    vc.pp();
    // suppose curr apple goes in x group
    sumx += k;
    minimiseDifference(vc, minDiff, sumx, sumy);

    // else suppose curr apple goes in y group
    sumx -= k; // undoing last change
    sumy += k;
    minimiseDifference(vc, minDiff, sumx, sumy);
    return;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> vc;
    ll curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        vc.pb(curr);
    }
    ll minDiff = INT32_MAX;

    ll sumx = 0, sumy = 0;

    minimiseDifference(vc, minDiff, sumx, sumy);

    cout << minDiff;
    return 0;
}