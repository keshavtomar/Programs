#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <array>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int found(vector<pair<ll, int>> &vc, int i, int x)
{
    int start = i + 1;
    int end = vc.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vc[mid].first == x)
        {
            return mid;
        }
        else if (x > vc[mid].first)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<ll, int>> vc;
    ll k;
    FOR(i, 0, n)
    {
        cin >> k;
        vc.pb({k, i + 1});
    }
    sort(vc.begin(), vc.end());

    // cout << "After sorting : " << endl;
    // for (auto it : vc)
    // {
    //     cout << it.first << " ";
    // }
    // cout << endl;
    // for (auto it : vc)
    // {
    //     cout << it.second << " ";
    // }
    // cout << endl;

    bool foundStatus = false;
    FOR(i, 0, n - 1)
    {
        int ind = found(vc, i, x - vc[i].first);
        if (ind != -1)
        {
            cout << min(vc[i].second, vc[ind].second) << " " << max(vc[ind].second, vc[i].second) << endl;
            foundStatus = true;
            break;
        }
    }
    if (!foundStatus)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}