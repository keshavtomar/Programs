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

ll solve(vi &k, ll t)
{
    ll start = 1;
    ll end = 1e18;
    ll minimumtime;
    while (start <= end)
    {
        ll mid = (start + end) / 2;
        ll no_of_tasks_completed = 0;
        FOR(i, 0, k.size())
        {
            no_of_tasks_completed += min(mid / k[i], (ll)1e9);
        }
        if (no_of_tasks_completed >= t)
        {
            // this can be the answer, but searchs left
            minimumtime = mid;
            end = mid - 1;
        }
        else
        {
            // try increasing time
            start = mid + 1;
        }
    }
    return minimumtime;
}

int main()
{
    ll n, t;
    cin >> n >> t;
    vi k(n);
    FOR(i, 0, n)
    {
        cin >> k[i];
    }

    ll miimumtime = solve(k, t);

    cout << miimumtime << endl;
    return 0;
}