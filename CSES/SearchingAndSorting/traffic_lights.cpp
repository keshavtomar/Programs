#include <bits/stdc++.h>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    set<int> lights{0, x};
    multiset<int> length{x};

    FOR(i, 0, n)
    {
        int k;
        cin >> k;

        // for (auto ii : lights)
        // {
        //     cout << ii << " ";
        // }
        // cout << endl;
        // for (auto ii : length)
        // {
        //     cout << ii << " ";
        // }
        // cout << endl;

        auto it1 = lights.upper_bound(k);
        auto it2 = it1;
        --it2;
        length.erase(length.find(*it1 - *it2));

        length.insert(*it1 - k);
        length.insert(k - *it2);

        lights.insert(k);

        // for (auto ii : lights)
        // {
        //     cout << ii << " ";
        // }
        // cout << endl;
        // for (auto ii : length)
        // {
        //     cout << ii << " ";
        // }
        // cout << endl;

        auto it = length.end();
        --it;
        cout << *it << endl;
    }

    return 0;
}