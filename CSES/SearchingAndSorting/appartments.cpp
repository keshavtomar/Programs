#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a, b;
    vector<pair<int, int>> va;
    vector<int> vb; 
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        va.pb({a - k, a + k});
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b;
        vb.pb(b);
    }

    sort(va.begin(),va.end());

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int i1 = lower_bound(vb.begin(), vb.end(), va[i].first) - vb.begin();
        int i2 = lower_bound(vb.begin(), vb.end(), va[i].second) - vb.begin();
        if (i2 - i1 == 1 && vb[i1].second == 0)
        {
            count++;
            vb[i1].second = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int i1 = lower_bound(vb.begin(), vb.end(), va[i].first) - vb.begin();
        int i2 = lower_bound(vb.begin(), vb.end(), va[i].second) - vb.begin();
        if (i2 - i1 > 1 && vb[i1 + 1].second == 0)
        {
            count++;
            vb[i1 + 1].second = 1;
        }
    }

    cout << count;

    return 0;
}