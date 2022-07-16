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

ll sumc(vector<ll> &vc, ll k)
{
    ll sum = 0;
    ll n = vc.size();
    FOR(i, 0, n)
    {
        sum += abs(vc[i] - k);
    }
    return sum;
}

ll solve(vector<ll> &vc)
{
    ll start = *min_element(vc.begin(), vc.end());
    ll a = start;
    ll end = *max_element(vc.begin(), vc.end());
    ll b = end;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        // cout << "start is " << start << " end is " << end << " mid is " << mid << endl;

        ll left = sumc(vc, mid - 1);
        ll curr = sumc(vc, mid);
        ll right = sumc(vc, mid + 1);
        // cout << " left is " << left << " curr is " << curr << " right is " << right << endl;

        if (curr < right && curr < left)
        {
            return curr;
        }
        else if (left < right)
        {
            // go left
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> vc;
    ll k;
    FOR(i, 0, n)
    {
        cin >> k;
        vc.pb(k);
    }

    // ll leftsum = sumc(vc, vc[0]);
    // ll rightsum = sumc(vc, vc[vc.size() - 1]);

    if (n == 1)
    {
        cout << "0" << endl;
    }
    else
    {
        ll ans = solve(vc);
        cout << ans << endl;
    }

    return 0;
}