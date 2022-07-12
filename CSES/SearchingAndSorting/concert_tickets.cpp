
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

// bool comp(pair<ll,bool> p1, pair<ll,bool> p2){

// }

int main()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll, greater<int>> st;
    ll curr;
    ll k;
    FOR(i, 0, n)
    {
        cin >> k;
        st.insert(k);
    }

    // for (auto it : st)
    // {
    //     cout << it << " ";
    // }

    FOR(i, 0, m)
    {
        cin >> curr;
        auto it = st.lower_bound(curr);
        if (it == st.end())
        {
            cout << "-1" << endl;
            continue;
        }
        cout << *it << endl;
        st.erase(it);
    }

    return 0;
}