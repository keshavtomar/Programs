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

bool comp(pair<pair<int, int>, int> el1, pair<pair<int, int>, int> el2)
{
    if (el1.first.first < el2.first.first)
    {
        return true;
    }
    else if (el1.first.first == el2.first.first)
    {
        if (el1.first.second > el2.first.second)
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
    vector<pair<pair<int, int>, int>> vc; //{{leftboundary, rightboundary},index}
    int l, r;
    FOR(i, 0, n)
    {
        cin >> l >> r;
        vc.pb({{l, r}, i});
    }

    sort(vc.begin(), vc.end(), comp);

    bool contained[n] = {0}, contains[n] = {0};

    int rightmax = 0;

    // check for contained
    FOR(i, 0, n)
    {
        if (vc[i].first.second <= rightmax)
        {
            contained[vc[i].second] = 1;
        }
        else
        {
            rightmax = vc[i].first.second;
        }
    }

    int rightmin = INT32_MAX;

    for (int i = n - 1; i >= 0; i--)
    {
        if (vc[i].first.second >= rightmin)
        {
            contains[vc[i].second] = 1;
        }
        else
        {
            rightmin = vc[i].first.second;
        }
    }

    FOR(i, 0, n)
    {
        cout << contains[i] << " ";
    }
    cout << endl;
    FOR(i, 0, n)
    {
        cout << contained[i] << " ";
    }
    cout << endl;

    return 0;
}