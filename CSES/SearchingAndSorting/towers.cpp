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
    int k;
    vector<int> vc;
    FOR(i, 0, n)
    {
        cin >> k;

        auto it = upper_bound(vc.begin(), vc.end(), k);
        if (it == vc.end())
        {
            vc.pb(k);
        }
        else
        {
            *it = k;
        }
    }

    cout << vc.size();
    return 0;
}

// 10
// 1 2 3 4 5 8 7 1 9 1