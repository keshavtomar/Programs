#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <map>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

bool cmp(pair<pair<string, int>, int> p1, pair<pair<string, int>, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<pair<string, int>, int>> vc; //{{string, match}, ind}

    FOR(i, 0, n)
    {
        string st;
        cin >> st;
        pair<pair<string, int>, int> p;
        p = {{st, 0}, i};
        vc.pb(p);
    }

    sort(vc.begin(), vc.end());

    for (int i = 1; i < vc.size(); i++)
    {
        if (vc[i].first.first == vc[i - 1].first.first)
        {
            vc[i].first.second = vc[i - 1].first.second + 1;
        }
    }

    sort(vc.begin(), vc.end(), cmp);

    for (auto st : vc)
    {
        cout << st.first.first;
        if (st.first.second != 0)
        {
            cout << "(" << st.first.second << ")";
        }
        cout << endl;
    }

    return 0;
}