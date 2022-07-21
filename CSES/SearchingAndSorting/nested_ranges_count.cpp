#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

// implementation of ordered_set

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

bool comp(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2)
{
    if (p1.first.first < p2.first.first)
    {
        return true;
    }
    else if (p1.first.first == p2.first.first)
    {
        if (p1.first.second > p2.first.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> range;
    FOR(i, 0, n)
    {
        int l, r;
        cin >> l >> r;
        range.pb({{l, r}, i});
    }

    sort(range.begin(), range.end(), comp);

    ordered_set st;

    // calculating in how many of the upper, the curr is contained

    int contained[n] = {0};

    FOR(i, 0, n)
    {
        contained[range[i].second] = st.size() - st.order_of_key(range[i].first.second);
        st.insert(range[i].first.second);
    }

    // calculating how many of the lower ones the curr contains

    ordered_set st2;

    int contains[n] = {0};

    for (int i = n - 1; i >= 0; i--)
    {
        contains[range[i].second] = st2.order_of_key(range[i].first.second + 1);
        st2.insert(range[i].first.second);
    }

    // printing contains first
    FOR(i, 0, n)
    {
        cout << contains[i] << " ";
    }
    cout << endl;

    // printing contained
    FOR(i, 0, n)
    {
        cout << contained[i] << " ";
    }
    cout << endl;

    return 0;
}