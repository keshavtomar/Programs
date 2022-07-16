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
    int n;
    cin >> n;
    ll st, en;
    vector<pair<ll, ll>> vc;
    FOR(i, 0, n)
    {
        cin >> st >> en;
        vc.pb({en, st});
    }

    sort(vc.begin(), vc.end());

    int ans = 1;
    int ended = vc[0].first;
    FOR(i, 1, n)
    {
        if (vc[i].second >= ended)
        {
            ans++;
            ended = vc[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}