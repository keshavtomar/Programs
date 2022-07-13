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

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<ll, int>> vc; // if second is -1, someone has gone out, else if second is 1 someone comes in

    ll arr, dep;
    FOR(i, 0, n)
    {
        cin >> arr >> dep;
        vc.pb({arr, 1});
        vc.pb({dep, -1});
    }

    sort(vc.begin(), vc.end());

    ll sum = 0;
    ll max = 0;
    for (auto it : vc)
    {
        sum += it.second;
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max;
    return 0;
}